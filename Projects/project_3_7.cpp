/**
File: project_3_7.cpp
Description: The value of e^x can be approximated by the sum. Write a program that takes a value x as input and outputs this sum for n taken to be each of the values 1 to 100. The program should also output e^x calculated using the predifed function exp. The function exp is a predefined function such that exp(x) returns an approximation to the value e^x. The function exp is in the library with the header file cmath. Your program should repeat the calculation for new values of x until the user says she or he is through.
Created: Thurs September 22, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() 
{        
	double denominator = 1.0;
	double numerator; 
	double n;
	double e;
	int power = 0;
	
	
	cout << "What is the value for n? (e^n)?" << endl;
	cin >> n; 
		
	for(double i=1.0; i<=100; i++) // e^i Numerator i^2, i^3, i^4...
		{
		numerator = pow(n, power); //This gives the Numerator i^1, i^2...
		power--;
		denominator *= i; // This equals out to the factorial
		cout << "The Value is: " << numerator/denominator << endl;
		}
    return 0;
} 
