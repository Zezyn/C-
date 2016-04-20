/*
Filename: project_7_4.cpp
Problem:
Author: Martin Hernandez 
Email: 7607920511m.h@gmail.com
Date: 10/28/2015
Description: Define a function that takes a partially filled array of numbers
as its arguments and returns the standard deviation of the numbers
*/

#include<iostream>
#include<cstdlib> //exit(1)
#include<fstream> //i/o file
#include<cmath>   //math
#include<string>  //strings
#include<stdlib.h> //atof (converts string to double)

using namespace std;

const int SIZE = 100;

double getaverage(double number[], int size);
double deviation(int, double [], double);
void numberget(int& arraysize, double number[]);
void printarray(double ar[], int size);

int main() {

    double number[SIZE]; 
    int arraysize;
    numberget(arraysize, number);

    return 0; 
}

void numberget(int& arraysize, double number[]) {
    
    double average = 0.0;
    int counter = 0;
    ifstream numb;

    numb.open("stddev.dat");
    if(numb.fail())
    {
         cout << numb << "does not exist" << endl;
         exit(1);
    }                                                
        while(! numb.eof()) {
            numb >> number[counter];   
            counter++;
        }
        arraysize = counter - 1;
        
        average = getaverage(number, arraysize); 
        cout << deviation(arraysize, number, average) << endl;
}

void printarray(double ar[], int size)
{
    for(int i=0; i<size; i++)
    { cout << ar[i] << endl; }
}


double getaverage(double number[], int size)
{
    double average = 0.0;
    double total = 0.0;

    for(int i=0; i<size; i++)
        total += number[i];
    average = (total/size);
    
    return average;
}

double deviation(int pos, double devi[], double average)
{
    double deviation;
    double sum2=0;

    for(int i=0;i<=pos;i++)
        sum2 += pow((devi[i]-average),2);
    deviation= sqrt(sum2/(pos));
    
    return deviation;
}
