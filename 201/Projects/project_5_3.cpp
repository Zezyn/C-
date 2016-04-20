/**
File: project_5_3.cpp
Created: 10/07/15 Last Modified: 10/11/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Write a program that inputs a date (for example, July 4, 2008) and outputs
the day of the week that corresponds to that date.

I have two problems in this program. First the input. I enter a value for monthinput (ex: March) and it automatically switches it to an integer not allowing me to put in the year. My Second problem is the switch in the last function called getdayoftheweek. 

The program compiles and I'm quite confused where I'm going wrong. :(
*/

//Add libraries here
#include<iostream>
#include<cmath>

using namespace std;

//Declare functions here
void getinput(int&, int&);
bool isLeapYear(int);
int getCenturyValue(int);
int getYearValue(int);
int getMonthValue(int, int);
void getdayoftheweek(int, int, int);

//Declare global variables here
enum month {January, February, March, April, May, June, July, August, September, October, November, December, Monday, Tuesday, Wednesday, Thursday, Friday, Saterday, Sunday};	

int main() 
{       
	int monthinput;	
	int yearinput;

	getinput(monthinput, yearinput);
	cout << monthinput << " - " << yearinput << endl;
	getdayoftheweek(getMonthValue(monthinput, yearinput), getYearValue(yearinput), getCenturyValue(yearinput));
	return 0;
} 

//Insert user defined funtions here
void getinput(int& monthinput, int& yearinput)
{
	cout << "Enter the month please: ";
	cin >> monthinput;
	cout << "Enter the year please: " << endl;
	cin >> yearinput;
}

bool isLeapYear(int year)
{
	if(((year % 400) == 0) || (year % 4 && year % 100)) 
	{
		return true;
	}
	else {
		return false;
	}
}

int getCenturyValue(int year)
{
	return ((3-((year / 100)%4))*2);
}

int getYearValue(int year)
{
	return (year % 100)/4 + (year %100);
}

int getMonthValue(int month, int year)
{

	switch (month) 
	{	
		case January:
			if(isLeapYear(year)) 
				{return 6;}
			else {return 0;}
		case February:
			if(isLeapYear(year))
				 {return 2;}
			else { return 3; }
		case March:
			return 3;
		case April:
			return 6;
		case May:
			return 1;
		case June:
			return 4;
		case July:
			return 6;
		case August:
			return 2;
		case September:
			return 5;
		case October:
			return 0;
		case November:
			return 3;
		case December:
			return 5;
		}
}

void getdayoftheweek(int month, int year, int cent)
{
		int dayoftheweek;
		dayoftheweek = ((month+year+cent)%7);

		cout << dayoftheweek << endl;

		switch(dayoftheweek) {
			case 1:
				cout << "The weekday calculates to Monday.";
			case 2: 
				cout << "The weekday calculates to Tuesday.";
			case 3:
				cout << "The weekday calculates to Wednesday.";
			case 4: 
				cout << "The weekday calculates to Thursday.";
			case 5:
				cout << "The weekday calculates to Friday.";
			case 6:
				cout << "The weekday calculates to Saterday.";
			case 7:
				cout << "The weekday calculates to Sunday.";
		}
}

