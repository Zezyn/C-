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
//This is the driver program
//driver.cpp
#include "utilities.h"

int main()
{
  ifstream instream;
  map<string, vector<double> > database;
  instream.open("movies.txt");
  calculate_ratings(database, instream);
  read_out(database);
  instream.close();
  return 0;
}
