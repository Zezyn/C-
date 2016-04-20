/**
File: project_5_1.cpp
Created: 
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: Cents changed into coins.
*/

//Add libraries here
#include<iostream>

using namespace std;

//Declare functions here
//Ask user for cents
int howmanycents();
//Divide Coins 
void compute_coins(int, int&, int&);

//Ask user to try again
void tryagain();

//Main Function
int main() 
{        
	//Variables
	int num;
	int amount_left;
	int quarters;
	int dimes;
	int nickels;
	int quarter_value = 25;
	int dime_value = 10;
	int penny_value = 1;

	//User input and validation	
	amount_left = howmanycents();
	
	//Welcome Message
	cout << endl << "" << amount_left << " cents equals:" << endl << endl;

	//Coins		
	cout << "Quarters: " << compute_coins(quarter_value, num, amount_left) << endl;

	//Try again?
	tryagain();	
	
    return 0;
} 

//Insert user defined funtions here

//User Input
int howmanycents()
{
	int cents = 0;

	do {
		cout << "How many cents? ";
		cin >> cents;
 	}	
	while (cents < 1 || cents > 99); 
	return cents;
}

//Coins
void compute_coins(int coin_value, int& num, int amount_left)
{
	num = (amount_left / coin_value);
	amount_left = (amount_left % coin_value);
	cout << "Quarters: " << num << endl;
	return;
}

void tryagain()
{
	char option;

	do {
		cout << endl << "Would you like to try another? (Y or N): ";
		cin >> option;
			
			if (option == 'y' || option == 'Y') {
	
				main();
			}	
			else if (option == 'n' || option == 'N') {
				cout << endl << "Thank you and have a nice day." << endl << endl;
				return;
			}
			else {
				cout << endl << "Not an option. Try again." << endl;
			}
	
	} while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
}
