#include<iostream>
#include<sstream>

using namespace std;

int main()
{
   ostringstream outputString;

   string string1("This is the first string");
   string string2("This is the second string");
   string string3("This is the third string");
   string string4("This is the fourth string");
   string string5("This is the fifth string");
   string string6("This is the sixth string");


	double double1 = 123.456;
	int integer = 22;

	outputString << string1 << endl;
	outputString << string2 << endl;
	outputString << string3 << endl;
	outputString << string4 << endl;
	outputString << string5 << endl;
	outputString << string6 << endl;
	outputString << double1 << endl;
	outputString << integer << endl;

   cout << "The outputString contains:" << outputString.str();

   outputString << "We are adding more characters" << endl;

   cout << "The outputString contains:" << outputString.str();

	return 0;
}
