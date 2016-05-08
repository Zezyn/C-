#include<iostream> 

using namespace std;

class A
{
	public:
	    A() {cout << "A's constructor\n";}
};

class B : public A
{
	public:
	   B() {cout << "B's constructor\n";}
};

class C : public B
{
	public:
	   C() {cout << "C's constructor\n";}
};

int main()
{

   C c;

	return 0;
}
