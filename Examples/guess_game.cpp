#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

/*
The guessing game

 x 1.  computer generates random int between 1 and 100
2.  while user enters the number
3.    check if number user entered is the same as computer
         if so print you guessed the number
	  else if number is higher
		  print that it is too high try again
      else
		  print that it is too low try again
      
	  increment count by one
*/
int main()
{

    srand(time(0));
	int computer_number = rand() % 100 + 1;
//	cout << computer_number << endl;
	int user_number;
	int count=0;
	do {
		cout << "I am thinking of a number between 1 and 100" << endl;
		cout << "What is it? " << endl;
//		cout << computer_number << endl;
		cin >> user_number;

	    if(user_number > computer_number)
			cout << "That is too high, try again." << endl;
		else if(user_number < computer_number) {
			cout << "That is too low, try again." << endl;
		}
		else{
	      cout << "You guessed it!!!" << endl;
		  break;
		}
		count++;
//	} while(user_number != computer_number);
	} while( 1 );
	cout << "You guessed this in " << count << " tries." << endl;
	return 0;
}
