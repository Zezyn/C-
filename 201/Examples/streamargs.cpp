#include<iostream>

using namespace std;

void input(istream&,char&);
void input(istream&,int&);
int main()
{

	char c;
	int i;
	input(cin,c);
	input(cin,i);
	cout << c << endl;
	cout << i << endl;
	return 0;
}

void input(istream& in,char& c)
{
	in >> c;
}

void input(istream& in,int& i)
{
	in >> i;
}
