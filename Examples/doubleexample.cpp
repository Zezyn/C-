#include<iostream>

using namespace std;

int main()
{

    	double x;


	x = 78.500001;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "The value of x is: "<< x << endl;

	return 0;
}
