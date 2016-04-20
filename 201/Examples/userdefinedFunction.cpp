#include<iostream>

double simpleForce(double,double);
using namespace std;


int main()
{

    double m = 2;
    double a = 10;

	cout << simpleForce(m,a);

	return 0;
}

double simpleForce(double mass,double accel)
{
	return mass * accel;
}
