#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{

    ifstream ifstr;
    ifstr.open("somedata.dat");
    if (ifstr.fail())
    {
        cout << "could not open somedata.dat" << endl;
        exit(1);
    }
    return 0;
}
