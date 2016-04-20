#include<iostream>
#include<string>

using namespace std;

int foo(int);
void swap(int&,int&);
void swap2(int,int);
void prompt(string,int&);
void prompt_and_swap(string,int&,int&);

int main()
{

	int a,b;

	prompt_and_swap("Enter the value for ",a,b);

	cout << "Before swap a=" << a << " b=" << b<<endl;
	swap(a,b);
	cout << "After swap a=" << a << " b=" << b<<endl;
	swap2(a,b);
	cout << "After swap2 a=" << a << " b=" << b<<endl;
	return 0;
}

int foo(int x)
{
	x = 10;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
    b = tmp; 
}

void swap2(int a, int b)
{
	int tmp = a;
	a = b;
    b = tmp; 
}

void prompt(string message,int& a)
{
	cout << message;
	cin >> a;
}

void prompt_and_swap(string message,int& a,int& b)
{
	prompt(message + "a: ",a);
	prompt(message + "b: ",b);
	swap(a,b);
}
