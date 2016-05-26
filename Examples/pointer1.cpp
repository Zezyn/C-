#include<iostream>

using namespace std;

int main()
{

   int *p1,p2;

	p2=1;
	p1 = &p2;

	cout << p2 << endl;

   p2 = 10;

	cout << &p2 << endl;
	cout << p1 << endl;

	p1 = new int;
	cout << p1 << endl;
	return 0;
}

