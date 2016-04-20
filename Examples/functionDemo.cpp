#include<iostream>

using namespace std;

int add(int,int);
int sub(int,int);
int inneradd(int,int);

int main()
{

	int a=10,b=20;
	int sum = add(a,b);

	int c = add(add(add(2,3),add(a,b)),add(3,4));
	//int c = add((2+3+1+20),3+4);

	c = add(2,1);
	c = sub(1,2);
	c = sub(2,1);
	cout << c << endl;
	return 0;
}

int add(int a,int b)
{
	return inneradd(a,b);
}

int sub(int a,int b)
{
	return a-b;
}

int inneradd(int a,int b)
{
	return a+b;
}
