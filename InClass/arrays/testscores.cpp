/*
    Filename: testscores.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/27/2015
    Description: Arrays in class 
*/

#include <iostream>

using namespace std;

int main() {
    //Declare An array of 6 variables
    int score[5];

    score[0] = 90;
    score[1] = 89;
    score[2] = 80;
    score[3] = 70;
    score[4] = 60;

    char word[6];
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[5] = '\0';

    cout << word << endl;
    cout << score << endl;

    return 0;
}
