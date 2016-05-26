/**
File: get.cpp
Created: 10/15/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Inclass get lecture.
*/

//Add libraries here
#include<iostream>
#include<cmath>
#include<fstream>
#include<cstdlib>

using namespace std;

//Declare functions here

//Declare global variables here
int main() 
{        
	ifstream source;
	char c;
	source.open("gettest.cpp");
	if(source.fail()) { 
		cout << "file does not exist" << endl;
		exit(1); 
	}
	int count_char = 0;
	int count_line=0;
	while(source.get(c)) { 
	//cout << c << endl; 
		//count++;
		if(c == '\n') {
			count_line++;
		}	
	}
	cout << count_char << endl;
	cout << count_line << endl;
    return 0;
} 

//Insert user defined funtions here
