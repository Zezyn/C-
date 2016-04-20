#include<iostream>

using namespace std;

int main()
{

    double meters  = 23.25;
    // get the decimal part as centimeters
    double cm = (meters - static_cast<int>(meters)) * 100;
    cout << 23 << " meters and " << cm << " centimeters" << endl;
    return 0;
}
