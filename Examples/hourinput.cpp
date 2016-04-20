#include<iostream>

using namespace std;

int main()
{

	int hour,minutes;
	char colon;

	cout << "Enter the hour and minute: ";
	cin >> hour >> colon >> minutes;

	cout << "The hour is: " << hour << endl;
	cout << "The minutes are: " << minutes << endl;

    char firstchar,secondchar;

	firstchar = 'M';
	secondchar = 'o';

	if ( firstchar == 't' || firstchar == 'T' )
	{
		if ( secondchar == 'u' || secondchar == 'U' )
		{
			cout << "We know that we have a tuesday" << endl;
		}
		else if ( secondchar == 'h' || secondchar == 'H' )
		{
			cout << "We know that we have a thursday" << endl;
		}
		else
			cout << "We have an error" << endl;
	}

	return 0;
}
