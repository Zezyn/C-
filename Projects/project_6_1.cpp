/*
File: project_6_1.cpp
Created: 10/19/15
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Write a program to generate personalized junk mail.
*/

//Add libraries here
#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

//Declare functions here
void userinput(string&, string&);
void readwritefile(string, string);

//Declare global variables here
int main() 
{   
    string name, filename;
     
    userinput(name, filename);
    readwritefile(name, filename);

    return 0; 
} 

//Insert user defined functions here
void userinput(string& name, string& filename) {
    
    string first_name, last_name;
    
    cout << "What name would you like to use in the personalized junk mail? (First and last name): ";
    cin >> first_name >> last_name;
    name = first_name + " " + last_name;
    
    cout << "What is the file name you would like to use? ";
    cin >> filename;
    filename = filename + ".txt";

}

void readwritefile(string name, string filename) {
    
    ifstream infile;
    ofstream outfile;

    char p;
    
    infile.open("letterbody.txt"); 
    outfile.open( filename.c_str() );

    if(infile.fail()) {
        cout << "File does not exist" << endl; 
        exit(1);
    }

    bool namefound = false; 
    while (infile.get(p)) {
        if(p == '#') {
            do {
                infile.get(p);
                if(p == '#') { namefound = true; }
            }    
                while (p != '#' && namefound != true);

                    if(namefound == true) {
                        outfile << name;
                        namefound = false; 
                    }
        }
        else { outfile << p; }
    
    }
    infile.close();
    outfile.close();
}

