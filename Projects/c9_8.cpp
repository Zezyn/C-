/*
    Filename: c9_8.cpp
    Problem: Will not count the number of 1's properly.
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 02/17/2016
    Description: Write a program that outputs a histogram of student grades for an 
    assignment. The program should input each student’s grade as an integer and 
    store the grade in a vector (covered in Chapter 8). Grades should be entered 
    until the user enters -1 for the grade. The program should then scan through 
    the vector and compute the histogram. In computing the histogram, the minimum 
    value of the grade is 0 but your program should determine the maximum value 
    entered by the user. Use a dynamic array to store the histogram.  
    Output the histogram to the console.  
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Input of students grade (Vector) -1 declares end of entry.
void grade_input(vector<int>& g, int& max);

//Scan through vector and compute 0 to max number (determined by computer)
void grade_compute(vector<int>& g, int *dArray ,int max);

//Output Histogram to screen.
void grade_print(vector<int>& g, int *dArray, int max_score);

const int CAP = 1000;

int main() {

    int max; //Used for maximum number
    vector<int> g; //g is for Grade vector
    int *dArray = new int[CAP]; //Dynamic array for count

    grade_input(g, max);
    grade_compute(g, dArray ,max);
    grade_print(g, dArray, max);
    
    return 0;
}

void grade_input(vector<int>& g, int &max) {
    
    int grade = 0;    
    int stop = -1;

    cout << endl << "******************************************************" << endl;
    cout << "       Welcome to the Histogram Program" << endl;
    cout << "******************************************************" << endl << endl;
    do {
        cout << "Please enter a grade (Enter -1 when finished): ";
        cin >> grade;
        if(grade == stop){
            break;
        }
        g.push_back(grade); //Enters into vector
        if(grade>max){  //Finds Maximum number entered
            max=grade;
        }
    } while(grade > 0 && grade < 101);   
    sort(g.begin(), g.end()); //Sorts vector
}

void grade_compute(vector<int>& g, int *dArray ,int max) {

    int count=1;
    
    for(int i=0;i<g.size();i++){  
        for(int j=1;j<g.size();j++){  
            if(g[i] == g[j]){
                count++;    //Counts repetitions
            }    
        }
        dArray[i] = count;  //enter into dynamic array here for count
        count = 0;
    }
}

void grade_print(vector<int>& g, int *dArray, int max_score) {

    int temp; //Used to swap numbers to display

    cout << endl << "******************************************************" << endl;
    cout << "Maximum Score is: " << max_score << endl << endl;

    for(int i=0;i<g.size();i++) { 
        temp = g[i];
        if(temp != g[i+1]){   //Makes sure duplicates are not printed
            cout << "Number of " << g[i] << "\'s: " << dArray[i] << endl;
        }
    }
    cout << endl << "******************************************************" << endl;

    delete[] dArray; //Frees up the dynamic array
    dArray = NULL;
}
