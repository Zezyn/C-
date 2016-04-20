/**
File: project_2_14.cpp
Description: Write a program that calculates the total grade for N classroom exercises as a percentage. The user should input the value for N followed by each of the N scores and totals. Calculate the overall percentage (sum of the total points earned divided by the total points possible.) and output it as a percentage. Sample input and output is shown below.
Created: Sun September 13, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    	//Declare Variables
	int assignments, count=1;
    	double score, possiblepoints, totalpoints, points, grade;
    	//Ask for number of assignments from user
    	cout << "\nPlease enter the number of exercises to calculate: \n";
    	cin >> assignments;
            	while (assignments > 0)
            	{
            	//Ask for total points possible for assignment
            	cout << "\nHow many points possible for exercise " << count << "?\n";
            	cin >> possiblepoints;
            	totalpoints = (possiblepoints + totalpoints);
            	//Ask for grade per assignments
            	cout << "\nPlease enter the score for exercise " << count << ":\n";
            	cin >> score;
            	points = (score + points);
            	cout << endl << "\nPoints earned: " << points << endl << "Total points available " << totalpoints << endl;
            	(assignments--, count++);
            	}
            	//Calculate Score percentage and display
            	grade = ((points/totalpoints)*100);
            	cout << fixed << setprecision(2) << "The percentage of the grade is: %" << grade << endl;
            	cout << "\n\nThank you for using the grading program.\n\n";
    	return 0;
}
