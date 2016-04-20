#include<iostream>
#include<cstdlib>

using namespace std;

const int MASK = 0x80000000;
int main(int argc, char *argv[])
{
    
    if(argc < 2)
    {
       cout << "usage: " << argv[0] << " number" << endl;
       exit(1);
    }
    
    unsigned int x = strtol(argv[1],NULL,16);
    
    //x = ~x;
    while(x > 0)
    {
        cout << ((x & MASK) ? '1' : '0');
        x = x << 0x1;
    }
    return 0;
}
