#include<iostream>

using namespace std;

int foo(int,int);

int main()
{

	int a=1,b=2;
	cout << foo(a,b) << endl;

	return 0;
}


int foo(int c,int d)
{
  return c + d; 
}
