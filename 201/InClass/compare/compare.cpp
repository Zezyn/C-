/**
File: compare.cpp
Created: 10/6/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Write a function max which returns an integer that is the maximum of 2 integer input parameters, put your code below.
*/

//Add libraries here
#include<iostream>

using namespace std;

//Declare functions here
int compare(int number1, int number2);

int main() 
{
        int number1;
	int number2;
	cout << "Please enter a number:" << endl;
	cin >> number1;
	cout << "Please enter a second number:" << endl;
	cin >> number2;
	cout << compare(number1, number2);
	cout << " is the greater number." << endl;

    return 0;
} 

//User defined function
int compare(int number1, int number2)
{
	int answer;
	if (number1 > number2)
	{
		answer = number1;
	}
	else if (number2 > number1)
	{
		answer = number2;
	}
	return answer;
}



