/**
File: project_4_6.cpp
Created: Sunday September 27, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
Description: You have invented a vending machine capable of deep frying twinkies. Write a program to simulate the vending machine. It costs $3.50 to buy a deep-fried twinkie, and the machine only takes coins in denominations of a dollar, quarter, dime, or nickel. Write code to simulate a person putting money into the vending machine by repeatedly prompting the user for the next coin to be inserted. Output the total entered so far when each coin is inserted. When $3.50 or more is added, the program should output “Enjoy your deep-fried twinkie” along with any change that should be returned. Use top-down design to determine appropriate functions for the program.

*/

//Declare libraries
#include<iostream>
using namespace std;

//Declare functions if any
double total_check(double total);

int main()
{
//Declare variables	
int option = 0;
int dollars = 0;
double const dollar = 1.00;
int quarters = 0;
double const quarter = 0.25;
int dimes = 0;
double const dime = 0.10;
int nickels = 0;
double const nickel = 0.05;
double const twinkie = 3.50;
double total = 0.00;
double change = 0.00;

//Style
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

//Display welcome message. Ask user for $3.50 in coins (Dollars, quarters, dimes, nickels.)
cout << endl << endl << "********************************************************************" << endl;
cout << endl << "Welcome to the deep fried twinkie machine. \nPlease enter $3.50. I accept Dollars, Quarters, Dimes and nickels." << endl << endl;
cout <<"********************************************************************" << endl;


do {
    //Create menu
    cout << "1) Dollars " << endl;
    cout << "2) Quarters " << endl;
    cout << "3) Dimes " << endl;
    cout << "4) Nickels " << endl;
    cout << "<< Please select an option >>" << endl;
    cin >> option;
    
	//Add and display coins and amount of money given by the user
    if(option==1) //Option for dollars
    	{
            ++ dollars;
            total = (total + dollar);
    	}
    else if(option==2) //Option for Quarters
    	{
            ++ quarters;
            total = (total + quarter);
    	}
    else if(option==3) //Option for Dimes
    	{
            ++ dimes;
            total = (total + dime);
    	}
    else if(option==4) //Option for nickels
    	{
            ++ nickels;
            total = (total + nickel);
    	}
    else { //Displays error message for bad input
        cout << endl << endl << "********************************************************" << endl;
        cout << "You have entered an improper option. Please try again." << endl;
        cout << "********************************************************" << endl << endl;
    	}

	//Display the change in coin amount and money.
	cout << endl << endl << "You have entered the following coins: " << endl << "Dollar Coins: " << dollars << endl;
	cout << "Quarters:     " << quarters << endl << "Dimes:        " << dimes << endl << "Nickels:      " << nickels << endl;
	cout << "Your total is: $" << total << endl << endl;
   
	//Check change
	change = total_check(total);
	   
	} while (total <= twinkie); //Program terminates if option = 0 given by the if statement.

     return 0;
}

double total_check(double total)
{ 
		double change = 0.00;
		double const twinkie = 3.50;
		int option;
		if(total >= twinkie) //Check to see if user has entered $3.50
        {   change = (total - twinkie);
        //Give the user change if he has given more then 3.50.
        cout << "\nYour change is: $" << change << endl << "** Thank you and enjoy your deep fried twinkie. **" << endl << endl;
        } 
		return(change);
}

