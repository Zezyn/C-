#include<iostream>
//#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{

    string buffer="";
    int dcount=0;
    while (!cin.eof())
	{
		char c;
		cin.get(c);
		if (isdigit(c))
		{
			dcount ++;
		}
		if ( c !=  ',' && c != '\n' )  
		{
			buffer += c;
		}
		else // then we know we have an end of field delimiter
		{
			cout << buffer << endl;
			buffer = "";
		}
	}
	cout << "The number of digits was: " << dcount << endl;

	return 0;
}
