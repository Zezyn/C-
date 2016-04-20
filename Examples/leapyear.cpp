#include<iostream>

using namespace std;

int main()
{


	// This is a declaration for the year and it is an integer
    int year;

	
	// repeat the following until user ends the session:
	do 
	{
		// 1. prompt user for the year

		cout << "Enter in the year (enter -9999 to end the program) : ";
		cin >> year;

		// 2. calculate whether leap year
		if (year == -9999 ) 
		{
			break;
		}

		if((year % 4 == 0) &&  (year % 100 != 0) || (year % 400 == 0))
		{
			//output it is a leap year
			cout << "It is a leap year" << endl;
		}
		else
		{
			//output not a leap year
			cout << "It is not a leap year" << endl;
		}
	} while(year != -9999 );



	return 0;
}
