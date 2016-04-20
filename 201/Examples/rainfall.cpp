#include<iostream>
#include<string>

using namespace std;

void readData(double[],string[],int);
void printArray(double[],int);
void printArray(string[],int);
void printTable(double[],double[],string[],int);
const int MONTHS=12;
int main()
{
    double rainfall[MONTHS]; // rain fall for this year
    double p_rainfall[MONTHS]; // rain fall for previous year
    string months[MONTHS] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    readData(rainfall,months,MONTHS);
    readData(p_rainfall,months,MONTHS);
    printTable(rainfall,p_rainfall,months,MONTHS);
    return 0;
}
/*
Read the data from the user and fill the array
*/
void readData(double a[],string months[],int size)
{
}

void printArray(double a[],int size)
{
    for (int i=0;i< size;i++)
        cout << a[i] << endl;
}

void printArray(string a[],int size)
{
    for (int i=0;i< size;i++)
        cout << a[i] << endl;
}

void printTable(double current[], double previous[], 
                string months[],int size)
{
}
