#include<iostream>
#include<string>

using namespace std;

int main()
{

    int arraysize;
	int linenumber;
	char resp;
    cout << "How big do you want your array?";
	cin >> arraysize;
    string *p = new string[arraysize];

    cout << p << endl;
    cout << *p << endl;
	p[0] = "Hello";
	p[1] = "this";
	p[2] = "is";
	p[3] = "an";
	p[4] = "array";
	p[5] = "of";
	p[6] = "strings";
    char newstring[80];
	while(true)
	{
		cout << "Enter the line number that you want to edit: ";
		cin >> linenumber;
		cin.clear();
		cin.ignore(1);
		cout << "Enter the text you want to change it to: ";
		cin.getline(newstring,80);
		cin.clear();
		cin.ignore(1);
		p[linenumber] = string(newstring);
		cout << "The new line is: " << p[linenumber] << endl;
		cout << "Do you want to end? ";
		cin.clear();
		cin.ignore(1);
		cin >> resp;
		if (resp == 'y') 
			break;
	}
	for (int i=0;i<7;i++)
	{
		cout << p[i] << endl;
	}
	cout << endl;
	delete [] p;

	return 0;
}
