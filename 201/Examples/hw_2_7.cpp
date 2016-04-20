#include<iostream>

using namespace std;

double const G = 6.673e-8;
double GF(double m1,double m2,double d)
{
	return (G * m1 * m2) / (d * d);
}

int main()
{

   double m1,m2,d;
   
	cin >> m1 >> m2 >> d;
	cout << (GF(m1,m2,d)) << endl;
	return 0;
}
