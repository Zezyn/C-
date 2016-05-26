#include<iostream>

using namespace std;

class A
{
	   void somecalculation();
		int x,y;

	public:
	   A(int,int);
	   void output();
		void setX(int _x){ x = _x;};
		void setY(int _y){y = _y;};

};

A::A(int _x, int _y):x(_x),y(_y)
{
	cout << "A's constructor"<<endl;
}

void A::output()
{
	cout << "the output of somecalculation is:";
	somecalculation();
	cout << x << " " << y << endl;
}

void A::somecalculation()
{
	x = x + 10;
	y = y + 10;
}


int main()
{

   A a(1,1);
	a.output();
	return 0;
}
