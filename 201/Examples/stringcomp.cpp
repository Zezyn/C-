#include<iostream>
#include<cctype>
#include<string>

using namespace std;

string s_tolower(string&);
int main()
{

    string s1="a",s2="B"; 
	string needle="world",haystack="Hello World";
	if (s_tolower(s1) < s_tolower(s2))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	if(haystack.find(needle) == -1 )
		cout << "needle not found" << endl;
    else
		cout << "needle is at position: " << haystack.find(needle) << endl;
	return 0;
}

string s_tolower(string& s)
{
	string temp;
	for (int i=0;i< s.length();i++)
	{
		temp += tolower(s[i]);
	}
	return temp;

}
