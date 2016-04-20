#include<iostream>

using namespace std;

class A
{
	public:
		A();
		A(int);
		void coolfunction();
		int getSomedata();
    private:
	    int somedata;
};

A::A() 
{
	cout << "This is A's default constructor" << endl;
}

A::A(int x) 
{
	somedata = x;
	cout <<  "This is A's other constructor" << endl;
}

int A::getSomedata()
{
	return somedata;
}

void A::coolfunction()
{
	cout << "something cool:" << 42 <<endl;
}

class B : public A
{
	public:
	    B();
		void somethinggreat();
};

B::B()
{
	cout << "B's constructor" << endl;
}

void B::somethinggreat()
{
	cout << "something great because we did ";
	cout << coolfunction();
}

int main()
{

	//A a;
	//A a1(10);
	B b;

	return 0;
}
