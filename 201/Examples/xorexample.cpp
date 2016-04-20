#include<iostream>
#include<cstdlib>

using namespace std;


void print_bin(unsigned int x);

int main(int argc,char* argv[])
{

    if(argc < 2)
    {
        cout << "usage: " << argv[0] << " hex_number"<< endl;
        exit(1);
    }

    unsigned int x = static_cast<unsigned int>(strtol(argv[1],NULL,16));
    cout << hex << x << endl;
    print_bin(x);
    cout << "x | 0xFFFFFFFF" << endl;
    print_bin(x | 0xFFFFFFFF);
    cout << "x & 0xFFFFFFFF" << endl;
    print_bin(x & 0xFFFFFFFF);
    cout << "x ^ 0xFFFFFFFF" << endl;
    print_bin(x ^ 0xFFFFFFFF);
    cout << "~x" << endl;
    print_bin(~x);

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
