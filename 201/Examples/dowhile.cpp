#include<iostream>

using namespace std;

int main()
{



	// Example of a do while loop

	char response;
	do
	{
		cout << "Some awesome processing going on here" << endl;
		cout << "Some awesome processing going on here" << endl;
		cout << "Some awesome processing going on here" << endl;

		cout << "Would you like to do the whatever again? ";
		cin >> response;
	} while( response == 'y' || response == 'Y');

	return 0;
}
