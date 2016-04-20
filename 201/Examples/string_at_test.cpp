#include<iostream>
#include<exception>
#include<string>

using namespace std;

int main()
{

    string s = "Mary";
	try
	{
		cout << s[6] << endl;	
//		cout << s.at(6) << endl;	
	}
	catch(exception& e)
	{
		cout << "Out of range error" << endl;
	}

	return 0;
}
