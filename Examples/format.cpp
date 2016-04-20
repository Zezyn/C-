#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    double val = -3456.45; 
    double val2 = 1.45; 
	cout.precision(2);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout << "1234567890123456789012345678901234567890";
	cout << "1234567890123456789012345678901234567890" << endl;
	cout.width(25);
	cout.unsetf(ios::showpos);
	cout << val <<endl;
	val = 1.0;
	cout << val << endl;
	cout.setf(ios::scientific);
	val = 1.86e5;
	cout << val << endl;
	val = 1.03e-10;
	cout << val << endl;
	cout << "Start" << setw(4) << 10 << setw(4) << 20 << setw(6) << 30 << endl;
return 0;

}


