/**
File: project_3_2.cpp
Description: (15 points) Calculating Pi
An approximate value of pi can be calculated using the series given below:
pi = 4 * [ 1 - ⅓ + ⅕ - 1/7 + 1/9 … + ((-1)n)/(2n + 1) ]
write a C++ program to calculate the approximate value of pi using this series. The program takes an input n that determines the number of terms in the approximation of the value of pi and outputs the approximation. Include a loop that allows the user to repeat this calculation for new values n until the user says she or he wants to end the program.
Created: Saterday September 19, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>

using namespace std;

int main() 
{        
	int n = 0;
	int sum = 0;
	
	cout << "Please enter the value for N" << endl;
	cin >> n;
	
	for(int i=1; i <= n; i++) {
		sum += i;
	}
	
	cout << sum << endl;
	
    return 0;
} 
