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
#include<fstream>

using namespace std;

//Declare functions here

//Declare global variables here
int main() 
{        
	ofstream file1; //ofstream object // variable
	file1.open("outfile.txt"); 

	file1 << "Hello World, in a file" << endl;

    return 0;
} 

//Insert user defined funtions here
