/*
File Name: ex9.cpp
Description: Programming project #9 Chapter 4
Write a program that asks for the user's height, weight, and age, and then
computes clothing sizes according to the formulas:

o   Hat size = weight in pounds divided by height in inches and all that 
    multiplied by 2.9
o   Jacket size (chest in inches) = height times weight divided by 288
    and then adjusted by adding 1/8 of an inch fo each 10 years over age
    30. (Note that the adjustment only takes place after a full 10 years.
    So, there is no adjustment for ages 30 through 39, but 1/8 of an inch
    is added for age 40.)
o   Waist in inches = weight divided by 5.7 and adjusted by adding 1/10 of
    an inch for each 2 years over age 28. (Note that the adjustment only
    takes place after a full 2 years.  So, there is no adjustment for age 29,
    but 1/10 of an inch is added for age 30.
Use functions for each calculation.  Your program should allow the user to repeat this calculation as often as the user wishes
Author Name:
Date Created: Sat Sep 25 16:50:09 PDT 2010
*/
#include<iostream>
#include<string>

using namespace std;

char toupper(char);
char promptUser(string);

double getHatSize(int,int,int);
double getJacketSize(int,int,int);
double getWaist(int,int,int);

int main()
{

    char response='y';
    int height,weight,age;
    double hatsize,jacketsize,waist;
    // Loop until user answers no
    do
    {
        cout << "Enter the height:";
        cin >> height;
        cout << "Enter the weight:";
        cin >> weight;
        cout << "Enter the age:";
        cin >> age;

        response = promptUser("Do you want to continue (y for yes, n for no) ");
    }while(toupper(response) != 'N');
    return 0;
}

double getHatSize(int height,int weight,int age)
{
    double hs;
    hs = weight / static_cast<double>(height) * 2.9;
    return hs;
}

double getJacketSize(int height,int weight,int age)
{
}

double getWaist(int height,int weight,int age)
{
}

char promptUser(string p)
{
    char c;
    cout << p;
    cin >> c;
    return c;
}

char toupper(char c)
{
    if (c >=95 && c <= 125)
    {
        return c - 32;
    }
    else 
        return c;
}
