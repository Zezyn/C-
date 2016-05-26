/*
Created: Thursday September 17, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>

using namespace std;

int main()
{
        //Declare Variables
        int arabic_digit, roman_numerals, roman_ones, roman_tens, roman_hundreds, roman_thousands;
        string roman_letter_thousands, roman_letter_hundreds, roman_letter_tens, roman_letter_ones;
	char decision;
        
	do {
	//Ask User for Arabic Digit
        cout << endl << "Please enter a year between 1000 and 3000." << endl;
        cin >> arabic_digit;

        //Seperate Digit and change to Roman Numerals
        roman_thousands = arabic_digit / 1000 % 10;
        roman_hundreds = arabic_digit / 100 % 10;
        roman_tens = arabic_digit / 10 % 10;
        roman_ones = arabic_digit % 10;

        //Thousands place
		for(int i = 0;i<roman_thousands; i++) {
                roman_letter_thousands += "M";
                }
        cout << endl << endl << "The year " << arabic_digit << " is " << roman_letter_thousands;
		
        //Hundreds Place
        if (roman_hundreds == 4) {
                roman_letter_hundreds = "CD";
        }
        else if (roman_hundreds == 9) {
                roman_letter_hundreds = "CM";
        }
        else if (roman_hundreds >= 1 && roman_hundreds < 4) {
                for(int i = 0;i<roman_hundreds; i++) {
                        roman_letter_hundreds += "C";
                }
        }
        else if (roman_hundreds >= 5 && roman_hundreds < 9) {
                roman_letter_hundreds = "D";
                for(int i = 5;i<roman_hundreds; i++) {
                        roman_letter_hundreds += "C";
                }
        }

        cout << roman_letter_hundreds;

        //Tens Place
	if (roman_tens == 4) {
                roman_letter_tens = "XL";
        }
        else if (roman_tens == 9) {
                roman_letter_tens = "XC";
        }
        else if (roman_tens >= 1 && roman_tens < 4) {
                for(int i = 0;i<roman_tens; i++) {
                        roman_letter_tens += "X";
                }
        }
        else if (roman_tens >= 5 && roman_tens < 9) {
                roman_letter_tens = "L";
                for(int i = 5;i<roman_tens; i++) {
                        roman_letter_tens += "X";
                }
        }

        cout << roman_letter_tens;
		
	//Ones Place
        if (roman_ones == 4) {
                roman_letter_ones = "IV";
        }
        else if (roman_ones == 9) {
                roman_letter_ones = "IX";
        }
        else if (roman_ones >= 1 && roman_ones < 4) {
                for(int i = 0;i<roman_ones; i++) {
                        roman_letter_ones += "I";
                }
        }
        else if (roman_ones >= 5 && roman_ones < 9) {
                roman_letter_ones = "V";
                for(int i = 5;i<roman_ones; i++) {
                        roman_letter_ones += "I";
                }
        }

        cout << roman_letter_ones << " in Roman Numerals." << endl << endl;
		
        //Prompt user for another calculation

	cout << "Would you like to try another? (Y or N):";
	cin >> decision;
	}
	while (decision == 'Y' || decision == 'y'); 
	cout << endl << endl << "Thank you and have a nice day." << endl << endl;
}


