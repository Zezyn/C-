#include<iostream>

using namespace std;

int main()
{

    int response;

	cout << "Enter your response: ";
	cin >> response;

	switch(response)
	{
		case 10:
			cout << "You entered 10" << endl;
		case 20:
			cout << "You entered 20" << endl;
			break;
		case 30:
			cout << "You entered 30" << endl;
			break;
		case 40:
			cout << "You entered 40" << endl;
			break;

		default:
			cout << "You entered something I can't handle" << endl;
	}
	return 0;
}
