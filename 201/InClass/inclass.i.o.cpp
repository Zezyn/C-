/**
File: inclass.i.o.cpp
Created: 10/15/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: 
*/

//Add libraries here
#include<iostream>
#include<fstream>

using namespace std;

//Declare functions here

//Declare global variables here
int main() 
{        
	ifstream file1;
	file1.open("myfile.txt");
		if(file1.fail()) {
			cout << "error" << endl;
			exit(1);
		}
    return 0;
} 

//Insert user defined funtions here
