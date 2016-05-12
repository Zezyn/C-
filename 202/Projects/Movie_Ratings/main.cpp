/*
Filename: main.cpp
Problem: Unable to create maps from vector or variables only manually enter keys which isn't efficient
Author: Martin Hernandez
Email: 7607920511m.h@gmail.com
Date: 05/07/2016
Description: Write a program that reads a file in this format, calculates the average rating for each movie, and outputs the average along with the number of reviews. 
*/

#include<iostream>
#include<cstdlib>   //For Exit
#include<string>    //For Strings
#include<fstream>   //For Files
#include<map>       //For Map
#include<vector>

using namespace std;

int main() {
    
    //Create maps
    map<string, string> list;
    map<string, string> ratings;
    map<string, string> movies;
    map<string, string> avg;
    
    //Input from file
    ifstream ifs("movies.txt");
    string buffer;
    vector<std::string> temp;

    if(ifs.fail()) {
        cout << "Problem reading file" << endl;
        exit(1);
    }


    while(!ifs.eof()) {

        getline(ifs,buffer);                                        //Gets whole line
        temp.push_back(buffer);                                     //Control the flow of information

        //ifs >> buffer;                                            //Gets word by word
        //cout << "Buffer: " << endl << buffer << endl;             //Prints buffer

    }
    
    //Input into map
    string temp_check; //Used as middle man between array and map
    temp_check = temp[1];    

    //Insert vector into map
    //Only seems to work by manually entering keys won't accept variables

    //list.insert(pair<string, vector<string>>(temp[1],temp[2]));
    list[temp[1], temp[2]];
    //ratings.insert(temp[0]);                                      //DW
    //ratings["Movie 1 Rating"] = temp[0];
//    ratings[temp[1]] = temp[0];                                   //Doesn't work***
//    ratings.insert(pair<string, string>(temp[1], temp[0]));         //STILL GIVES BAD OUTPUT
    //movies["Movie 1 Title"] = temp[1]; //ONLY LINE THAT WORKS
    //movies[temp[1]] = temp[1];
    //avg[temp[1]] = temp[2];
    //avg["Movie 1 Average"] = temp[2];  //ONLY LINE THAT WORKS

//    cout << endl << "Vector: " << temp[1];                        //Test line for vector

    /*
    for(int z=0; z<temp.size(); z++) {                              //Prints vector
        cout << temp[z] << endl;
    }   
    */

    //Print map
    
    map<string, string>::const_iterator iter_l;                       //Creates Iterator
    for(iter_l = list.begin(); iter_l != list.end(); iter_l++)      //Iterator for list
       { cout << iter_l->first << " - " << iter_l->second << endl; }
    
    map<string, string>::const_iterator iter_r;                       //Creates Iterator
    for(iter_r = ratings.begin(); iter_r != ratings.end(); iter_r++)      //Iterator for ratings
       { cout << iter_r->first << " - " << iter_r->second << endl; }
    
    map<string, string>::const_iterator iter_m;                       //Creates Iterator
    for(iter_m = movies.begin(); iter_m != movies.end(); iter_m++)        //Iterator for movies
       { cout << iter_m->first << " - " << iter_m->second << endl; }

    map<string, string>::const_iterator iter_a;                       //Creates Iterator
    for(iter_a = avg.begin(); iter_a != avg.end(); iter_a++)              //Iterator for avg
       { cout << iter_a->first << " - " << iter_a->second << endl; }

    return 0;
}
