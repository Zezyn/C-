#include<iostream>

using namespace std;

int main()
{
   int length;
	cout << "Enter the length of the string: ";
	cin >> length;
	cin.ignore();
	char *str = new char[length];
	cout << "We will now try to fill the string" << endl;
   cin.getline(str,length);
	cout << "We are done filling the string" << endl;
	cout << "The string is:" << str << endl;

	return 0;
}
