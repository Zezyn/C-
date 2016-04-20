#include<iostream>

using namespace std;

int main()
{

    int count=0;
    char response='Y';  	
	do
	{ 
		cout << "**************************" << endl;
		cout << "Some menu" << endl;
		cout << "a Item a:" << endl;
		cout << "b Item b:" << endl;
		cout << "c Item c:" << endl;
		cout << "q for quit:" << endl;
		cout << "**************************" << endl;
		// Make sure that the user enters in the correct value
		do
		{
			cout << "Enter a menu option: ";
			cin >> response;
		    if ( !(   response == 'a' || response == 'A' || 
				      response == 'b' || response == 'B' ||
				      response == 'c' || response == 'C' ||
				      response == 'q' || response == 'Q' 
			    ) )
			{
				cout << "That is an invalid response" << endl;
			}
		} while ( !(   response == 'a' || response == 'A' || 
				      response == 'b' || response == 'B' ||
				      response == 'c' || response == 'C' ||
				      response == 'q' || response == 'Q' 
			    ) );

		// Now do the function that the user requested.
		int count=0;
        switch(response)
		{
			case 'a':
			case 'A':
						cout << "I will now do the A thing that you selected." << endl;
						while(count < 10)
						{
							cout << "count=" << count << endl;
							count++;
						}
						break;
			case 'b':
			case 'B':
						cout << "I will now do the B thing that you selected." << endl;
						break;
			case 'c':
			case 'C':
						cout << "I will now do the C thing that you selected." << endl;
						break;
			case 'q':
			case 'Q':
						cout << "Quitting" << endl;
						break;
		}

	} while( !(response == 'q' || response == 'Q') );

	return 0;
}
