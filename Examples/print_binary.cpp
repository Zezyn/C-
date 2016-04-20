#include<iostream>
#include<cstdlib>

using namespace std;

void print_bin(unsigned int x);

int main(int argc,char* argv[])
{

    print_bin(static_cast<unsigned int>(strtol(argv[1],NULL,16)));
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
