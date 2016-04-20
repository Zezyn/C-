#include<iostream>

using namespace std;

int main()
{

/* this program will take 2 values and output the subtraction of the first value
from the second value  and output the division of the first value from the second value */
    int x,y;

    cout << "Enter a value for x: ";
	cin >> x;
    cout << "Enter a value for y: ";
	cin >> y;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x / y = " << (x / y) << endl;
	cout << "x - y = " << (y - x) << endl;
	cout << "address of x = " << &x << endl;
    

	y = 10;
	return 0;
}
