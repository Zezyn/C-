/**
File: project_2_2.cpp
Description: Workers at a particular company have won a 7.6% pay increase retroactive for 6 months. Write a program that takes an employee's previous annual salary as input, and outputs the amount of retroactive pay due the employee, the new annual salary, and the new monthly salary. Use a variable declaration with the const modifier to express the pay increase. Your program should allow the calculation to be repeated as often as the user wishes.
Created: Tue September 8, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	double salary; //Users salary
	double pinc = .076; //0.076 (7.6%)
	double tretro; //total retroactive for 6 months
	double nsal; //new annual salary
	double msal; //new monthly salary
	char decision; //decision to calculate a new salary
	
	do {

		//Prompt user for salary
		cout << "What is your last year annual salary?\n";
		cin >> salary;
		//Calculate the retroactive pay
		tretro = ((salary*pinc)/2);
		cout << fixed << setprecision(2) << "Your retroactive pay for the last six months is: $" << tretro << endl;
		//Show new annual salary
		nsal=(((tretro*2)+salary));
		cout << fixed << setprecision(2) << "Your new annual salary is: $" << nsal << endl;
		//Show new Monthly salary
		msal = (nsal/12);
		cout << fixed << setprecision(2) << "Your new monthly salary is: $" << msal << endl;
		//Ask user if he/she would like to calculate another
		cout << "Would you like to calculate another? (Y or N)\n";
		cin >> decision;
	}
	while (decision == 'y' || decision == 'Y');
	cout << endl << "Thank you and have a nice day.\n\n";
return 0;
}
