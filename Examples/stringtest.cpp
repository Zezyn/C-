#include<iostream>
#include<string>

using namespace std;

int main()
{

    string star_string("************************************************");
    string string1="Hello",string2="World";
	string build = "Hello " + string1 + " World";
	string instring;

    cout << "Enter a line: ";
	getline(cin,instring);
	cout << "Your line is: " << instring << endl;
    cout << star_string << endl;
	cout << build << endl;
    cout << ( string1 + " " + string2 )<<endl;
	string temp;
	temp = string1;
	string1 = string2;
	string2 = temp;
    cout << ( string1 + " " + string2 )<<endl;
    cout << star_string << endl;

    return 0;
}
