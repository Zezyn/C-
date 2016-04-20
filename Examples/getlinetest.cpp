#include<iostream>

using namespace std;

int main()
{

	char buffer[80];

	cout << "Enter a line: ";
	cin >> buffer;
	cout << "Your line is: " <<buffer << endl;
	cin.ignore(80,'\n');
	cin.getline(buffer,80);
	cout << "Your line is: " <<buffer << endl;

	return 0;
}
