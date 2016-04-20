#include<iostream>

using namespace std;

int main()
{

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
