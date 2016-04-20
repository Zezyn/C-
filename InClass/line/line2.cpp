/**
File: line.cpp
Created: 10/15/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Inclass get lecture.
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
	ifstream source;
	char c;
	source.open("template.txt");
	if(source.fail()) { 
		cout << "file does not exist" << endl;
		exit(1); 
	}
	bool namefound = false;
	string name = "Zyn";
	while(source.get(c)) { 
		if(c == '#') {
			//keep reading until you get another #
			do {
				source.get(c);
				if(c == '#') {
					namefound = true;
				}
			}
				while (c == '#' && ! namefound);
			
			        if(namefound) {
					cout << name;
				}
		}
		else{ cout << c; }
	}
    return 0;
} 

//Insert user defined funtions here
