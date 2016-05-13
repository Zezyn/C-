/*
  Name: movie_review
  Description: A list of movies (stored in a file) is read into a map.
              The title of each movie is mapped to a vector that contains
              the individual reviews (stored as doubles)
              The map is iterated over and the title of each file as well
              as the average review is displayed
  Author: Nathan Tonning
  Date: May 7, 2016
  Email: nathantonning@gmail.com
*/
//IMPORTANT!! This program requires compilation in C++11 (g++ -std=c++11)
//This is the header file utilities.h
//Interface file for utilities.cpp
#ifndef UTILITIES_H
#define UTILITIES_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

using  namespace std;

void calculate_ratings(map<string, vector<double> >&, ifstream&);
//Creates a map of movies and a vector of their ratings

void read_out(map<string, vector<double> >&);
//Reads out the keys (Movie titles) and determines the average ratings
//from 1-5

#endif //UTILITIES_H
