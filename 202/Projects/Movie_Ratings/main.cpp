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

using namespace std;

void input_from_file();

int main() {

    input_from_file();

    return 0;
}

void input_from_file() {
    
    ifstream ifs("movies.txt");
    string buffer;

    if(ifs.fail()) {
        cout << "Problem reading file" << endl;
        exit(1);
    }

    while(!ifs.eof()) {
        getline(ifs,buffer); //Gets whole line
        //ifs >> buffer;     //Gets word by word
        cout << buffer << endl;
    }
}
