#include<iostream>

using namespace std;

template <class T>
T cube(T&);

template <class T>
T square(T&);

int main()
{

   double v1=10.0;
   int v2 = 3;
   

	cout << "v1 squared is " << square(v1) << endl;
	cout << "v2 squared is " << square(v2) << endl;
	cout << "v1 cubed is " << cube(v1) << endl;
	cout << "v2 cubed is " << cube(v2) << endl;

	return 0;
}

template <class T>
T cube(T& val)
{
	return val * val * val;
}

template <class T>
T square(T& val)
{
	return val * val;
}
