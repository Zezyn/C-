/*
Filename: main.cpp
Problem:
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
    string temp_check;
    temp_check = temp[1];    
    
    //ratings.insert(temp[0]);                                      //DW
    //ratings["Movie 1 Rating"] = temp[0];
    //ratings[temp[1]] = temp[0];                                   //Doesn't work***
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
    map<string, string>::const_iterator iter;                       //Creates Iterator
    
    for(iter = ratings.begin(); iter != ratings.end(); iter++) {    //Iterator for ratings
        cout << iter->first << " - " << iter->second << endl;
    }
    
    for(iter = movies.begin(); iter != movies.end(); iter++) {      //Iterator for movies
        cout << iter->first << " - " << iter->second << endl; 
    }
    for(iter = avg.begin(); iter != avg.end(); iter++) {            //Iterator for avg
        cout << iter->first << " - " << iter->second << endl;
    }


    return 0;
}
