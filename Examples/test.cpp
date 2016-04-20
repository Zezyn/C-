#include<iostream>
#include<string>

using namespace std;

int main()
{

    int *p1=NULL;
	string stg;
	char *cptr=NULL;
	int x = 10;
	p1 = &x;
	cptr = (char*)(&x);
	cptr[0] = 65;
	cptr[1] = 66;
	cptr[2] = 67;
	cptr[3] = '\0';
	cout << cptr << endl;
	cout << *p1 << endl; 

	stg = x;

	return 0;
}
