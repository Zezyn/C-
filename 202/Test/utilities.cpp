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
//The implementation file utilities.cpp
//The cooresponding interface file is utilities.h
#include "utilities.h"

void calculate_ratings(map<string, vector<double> >& database, ifstream& instream)
{
  string k,i,j;
  getline(instream,k);
  while(!instream.eof())
  {
    getline(instream,i);
    getline(instream,j);
    if(!i.empty() && !j.empty())
    {
      database[i].push_back(static_cast<double>(stoi(j)));
    }
  }
}

void read_out(map<string, vector<double> >& database)
{
  map<string, vector<double> >::const_iterator p;
  vector<double>::const_iterator iter;
  double numer;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << "Total number of movies: " << database.size() << endl << endl;
  for(p = database.begin(); p != database.end(); p++)
  {
    numer = 0.0;

    for(iter = p->second.begin(); iter != p->second.end(); iter++)
    {
      numer = numer + (*iter);
    }
    cout << p->first << ", number of reviews: " << p->second.size()
    << ", average: " << (numer / p->second.size()) << " / 5." << endl << endl;
  }
}
