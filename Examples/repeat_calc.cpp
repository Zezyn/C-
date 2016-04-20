#include<iostream>

using namespace std;

int main()
{

    
	char response='y';
	int number;
	while(1){

		cout << "Enter a number between 1 and 10 " ;
		cin >> number;
		while( number < 1 || number > 10)
		{
		   cout << "That is not correct - Enter a number between 1 and 10 " ;
		   cin >> number;
		}
		while(response == 'y' || response == 'Y' )
		{
			cout << "Some code to execute " << endl;


			cout << "Would you like to run this again? (y for yes - anything else for no): ";
			cin >> response;
		}

	}
	return 0;
}
