/**
File: project_4_2.cpp
Created: Fri September 26, 2015 
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description:Write a program that asks for the user’s height, weight, and age, and then computes clothing sizes according to the formulas;Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9 Jacket size (chest in inches) = height times weight divided by 288 and then adjusted by adding 1/8 of an inch for each 10 years over age 30. (Note that the adjustment only takes place after a full 10 years. So, there is no adjustment for ages 30 through 39, but 1/8 of an inch is added for age 40.) Waist in inches = weight divided by 5.7 and then adjusted by adding 1/10 of an inch for each 2 years over age 28. (Note that the adjustment only takes place after a full 2 years. So, there is no adjustment for age 29, but 1/10 of an inch is added for age 30.
Use functions for each calculation. Your program should allow the user to repeat this calculation as often as the user wishes.
*/

#include<iostream>
#include<iomanip>
using namespace std;

//Declare functions
//Hat Size = lbs*height*2.9
double hat_size(double height_in, double weight_lbs);

//Jacket size in inches = height*weight/288+1/8(for every 10 yrs over 30)
double jacket_size(double height_in, double weight_lbs, int age);

//Waist in inches = weight/5.7+1/10(for every 2 years over age 28)
double waist_size(double weight_lbs, int age);

int main() 
{        
	//Declare Variables
	int age;
	int height;
	int weight;
	char decision;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

do {
	//User input on age, height, and weight.
	cout << "What is your height in inches? " << endl;
	cin >> height;
	cout << "What is your weight in pounds? " << endl;
	cin >> weight;
	cout << "How old are you? " << endl;
	cin >> age;

	//Calculations and display
	cout << endl << "Hat Size: " <<  hat_size(height, weight) << endl;
	cout << "Your jacket size is (Inches at chest): " << jacket_size(height, weight, age) << endl;
 	cout << "Your waist size is: " << waist_size(weight, age) << endl;
	
} while (decision == 'Y' || decision == 'y'); 
cout << endl << "Thank you and have a nice day." << endl;
    return 0;
}

//Functions 

//Hat Size = lbs*height*2.9
double hat_size(double height_in, double weight_lbs)
{
 	double hat;	

	hat = ((weight_lbs/height_in) * 2.9);
return (hat);
}

//Jacket size in inches = height*weight/288+1/8(for every 10 yrs over 30)
double jacket_size(double height_in, double weight_lbs, int age)
{
	double jacket;
	
	jacket = ((height_in*weight_lbs)/288);
	
        for(double i=40;i<=age;i=i+10)
        {
        jacket += 0.125;
        }
return (jacket);
}

//Waist in inches = weight/5.7+1/10(for every 2 years over age 28)
double waist_size(double weight_lbs, int age)
{
	double waist;
	
	waist = (weight_lbs/5.7);
	
	for(double i=30;i<=age;i+=2)
	{
	waist += .1;
	}
return (waist);
}
