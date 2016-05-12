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
    map<string, vector<double> > database; 
    
    //Input from file
    ifstream ifs;
    ifs.open("movies.txt");
    string buffer, atemp1, atemp2;

    if(ifs.fail()) {
        cout << "Problem reading file" << endl;
        exit(1);
    }

    getline(ifs, buffer);
    while(!ifs.eof())
    {
        getline(ifs, atemp1);
        getline(ifs, atemp2);
        if(! atemp1.empty() && ! atemp2.empty())
        { 
           // cout << atemp1 << endl;
           // cout << atemp1 << " : " << atemp1.c_str() << endl;
          database[string(atemp1.c_str())].push_back(static_cast<double>(stoi(atemp2)));
        }
    }
    //Print map
    double num;
    map<string, vector<double> >::const_iterator iter_a;                       //Creates Iterator
    vector<double>::const_iterator iter_b;                                     //Creates Iterator
    for(iter_a = database.begin(); iter_a != database.end(); iter_a++) {        //Iterator for avg 
        num = 0.0;
        for(iter_b = iter_a->second.begin(); iter_b != iter_a->second.end(); iter_b++)
        { 
            num=num+(*iter_b); 
        }

        cout << iter_a->first.c_str();
        cout << iter_a->first << ": " << "Number of reviews: " 
        << iter_a->second.size() << ", " << "Average rating: " << (num/iter_a->second.size()) << endl;
     }
    

    return 0;
}
