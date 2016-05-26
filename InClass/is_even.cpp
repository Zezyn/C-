/**
File: is_even.cpp
Created: 10/6/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Calculate if an integer is even or odd
*/

//Add libraries here
#include<iostream>

using namespace std;

//Declare functions here
int is_even(int number1);
int is_odd(int number1);
//Declare global variables here

int main() 
{        
	int number1;
	int answer;
		
	cout << "Please enter a number:" << endl;
	cin >> number1;
	
	answer = is_even(number1);
		if (answer == 1)
		{	
			cout << number1 << " is even." << endl;
		}	
		else
		{	
			cout << number1 << " is odd." << endl;
		}
    return 0;
} 

//Insert user defined funtions here
int is_even(int number1)
{
	int answer;	
	if ((number1 % 2) ==0)
	{
		answer = 1;
	}
	else
	{
	        answer = is_odd(number1);
	}
 	return answer;
}

int is_odd(int number1)
{
	int answer;
	if ((number1 % 2) != 0)
	{
		answer = 2;
	}
	return answer;
}
