#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    double f = 1.7010;

    int fInt = f * 10000;
    cout << (fInt) << endl;
    cout << (fInt % 10000) << endl;
    cout << floor(f) << endl;
    cout << ceil(f) << endl;
    return 0;
}
