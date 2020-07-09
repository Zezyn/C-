/**
File: project_5_2.cpp
Created: 10/07/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Write a function that returns the windchill index. Your code should ensure that the restriction on the temperature is not violated. Look up some weather reports in back issues of a newspaper in your university library and compare the windchill index you calculate with the result reported in the newspaper. W = 13.12 + 0.6215 * t – 11.37 * v0.16 + 0.3965 * t * v0.016
*/

//Add libraries here
#include<iostream>
#include<cmath>
using namespace std;

//Declare functions here
//Temp given by user in C and calculate
void windchill();

//Declare global variables here

int main() 
{        
	windchill();
    return 0;
} 

//Insert user defined funtions here
//Ask user for temp and calculate
void windchill()
{
	int temp;
	int windchill;
	int windspeed;

		cout << endl << "**I will calculate the wind chill for you.** \nPlease provide a tempeture in Celsius: ";
		cin >> temp;
		cout << endl << "Please provide the wind speed: ";
		cin >> windspeed;

			if (temp <= 10 && windspeed == ' ') {
				cout << endl << "That is not valid input. Try again" << endl;
				main();
			}
			else {					
				windchill = (13.12 + 0.6215 * temp - 11.37 * pow(windspeed, .16) + .3965 * temp *  pow(windspeed, .016));
				cout << endl << "The Wind Chill Index in degrees Celsius is: " << windchill << endl << endl;	 
			}
}

