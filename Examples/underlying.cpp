#include<iostream>
#include<stack>
#include<list>
#include<string>

using namespace std;

int main()
{
   stack<double,list<double> > s;
	string buffer;
   getline(cin,buffer);
	s.push(1.0);
	s.push(2.0);

	return 0;
}
