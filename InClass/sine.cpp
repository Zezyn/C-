/**
File: sine.cpp
Created: 10/07/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: 
*/

//Add libraries here
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

//Declare functions here
double radians(int);
void graph_sine(int, int);
string pad_space(int v);
string build_line(double, int, int);

//Declare global variables here
const int PERIOD = 360;
const int RESOLUTION = 20;
const int ORIGIN = 20;
const int STEP = 6;

int main() 
{        
    graph_sine(PERIOD, STEP);
	return 0;
} 

//Insert user defined funtions here
double radians(int degrees)
{
	return M_PI * degrees / 100.0;
}

void graph_sine(int period, int step)
{
	for(int i = 0; i < PERIOD; i++)
	{
		cout << build_line(sin(radians(i)), RESOLUTION, ORIGIN) << endl;
//		cout << i << "," << sin(radians(i)) << endl;
	}
}

string pad_space(int v)
{
	string s;
	for(int i = 0; i < v; i++)
		s += " ";
	return s;
}

string build_line(double value, int resolution, int origin)
{
	int numberofspaces = value * resolution + origin;
	return pad_space(numberofspaces) + '*';
}
