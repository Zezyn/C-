#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	for(int deg = 0;deg < 360;deg++){
        double radian = M_PI*deg / 180;
		cout << "degree = " << deg;
		cout << " radian=" << radian;
		cout << " sin(radian) = " << sin(radian) <<endl;
	}

	cout << sin(pow(10,3)*M_PI / 180);

	return 0;
}
