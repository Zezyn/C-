/*
    Filename: project_8_1.cpp
    Problem: Problem I'm having is taking care of leading white space.
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/10/2015
    Description: Write a program that reads in a sentence of up to 100 characters and outputs the sentence with 
    spacing corrected and with letter corrected for capitalization. In other words, in the output sentence, all 
    strings of two or more blanks should be compressed to a single blank. The sentence should start with an 
    uppercase letter but should contain no other uppercase letters. Do not worry about proper names; if their 
    first letters are changed to lowercase, that is acceptable. Treat a line break as if it were a blank, in the
    sense that a line break and any number of blanks are compressed to a single break. Assume that the sentence 
    ends with a period and contains no other periods. 
    For example, the input

    the         Answer to life,   the Universe, and everything

    IS 42.

    should produce the following output:

    The answer to life, the universe, and everything is 42.
*/

//Add libraries here
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//Declare functions here
void userinput(string &);
string formatinput(string & sentence);
//Declare global variables here

int main() {

    string sentence;
    userinput(sentence);
    cout << formatinput(sentence) << endl; 

    return 0;
}

//Insert user defined functions here
void userinput(string & sentence) {

    cout << "Please enter a sentence: ";
    getline(cin,sentence);

}

string formatinput(string & sentence) {
    string lower(sentence);
    /*
    for(int i=1;i<sentence.length();i++) {
        lower[i] = tolower(sentence[i]); 
        if(lower[i] == ' ' && lower[i+1] == ' ' || lower[i] == '\n') { lower[i] = '\0'; }
    }
    */
    for (int i=0;i<strlen(sentence);i++)//change to correct index
        if(sentence[i] == ' ' && sentence[i+1] == ' ' || sentence[i] == '\n') { 
            sentence[i] = '\0';
    }
            cout << "\n" << sentence << " is new sent" << endl;

    if(lower[0] == ' ') {
        do { 
        lower[0] = '\0'; 
        lower[0] = toupper(lower[0]);
        }
        while(lower[0] == ' ');  
    }
    else { lower[0] = toupper(lower[0]); }
    
    return lower;
}
