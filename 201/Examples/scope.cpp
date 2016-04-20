#include<iostream>
#include<cmath>

using namespace std;

int foo();
int foo2(int);

int x=5;

int main()
{
    int x=1;
    cout << x << endl; 
    cout << "outer (file) x"<< ::x << endl; 
    foo();
	cout << x << endl;
	return 0;
}

int foo2(int x) 
{
	cout << x << endl;
}

int foo() 
{
	cout << x << endl;
}

