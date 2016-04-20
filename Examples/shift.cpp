#include<iostream>

using namespace std;

int main()
{
    unsigned int f=0x80000000;
    unsigned int f2=0x1;
    while(f2 > 0)
    {
        cout << f2 << endl;
        f2 <<= 0x1;
    }
    while(f > 0)
    {
        cout << f << endl;
        f >>= 0x1;
    }
    return 0;
}
