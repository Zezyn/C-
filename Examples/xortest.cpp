#include<iostream>

using namespace std;

void print_bin(unsigned int x);

int main()
{

    int a=70,b=69;

    cout << a << " " << b << endl;

    cout << "a = ";
    print_bin(a);
    cout << "b = ";
    print_bin(b);
    a ^= b;
    cout << "a = ";
    print_bin(a);
    cout << "b = ";
    print_bin(b);
    b ^= a;
    cout << "a = ";
    print_bin(a);
    cout << "b = ";
    print_bin(b);
    a ^= b;
    cout << "a = ";
    print_bin(a);
    cout << "b = ";
    print_bin(b);

    cout << a << " " << b << endl;

    return 0;
}

void print_bin(unsigned int x)
{
    unsigned int mask = 0x80000000;
    for(int i=0;i<32;i++)
    {
        cout << ((x & mask)?'1':'0');
        x <<= 0x1;
    }
    cout << endl;
}
