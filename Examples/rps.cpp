#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

	srand( time(0) );
    int user_turn,computer_turn;
    char response='y';	
	while (response == 'y' || response == 'Y')
	{
		cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors: " << endl;
		cin >> user_turn;

		// then have the computer generate a number
		computer_turn = random() % 3 + 1;

		// then compare the users number to the computers number and
		// output accordingly
		if ( user_turn == 1 && computer_turn == 3 )
			cout << "Rock smashes scissors user wins" << endl;

		cout << "Would you like to play again (y for yes, anything else for no) ? ";
		cin >> response;
	}

	return 0;
}
