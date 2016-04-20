#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{

    ofstream ofstr;
    double num;
    
    srand(time(0));

    ofstr.open("f_input.dat");
    
    ofstr.setf(ios::fixed);
    ofstr.precision(2);
    for (int i=0;i < 100; i++)
    {
        // get a random number
        num = static_cast<double>(rand() % 1000000 + 1) / 10000.0 ;
        ofstr << num << endl;
    }
    ofstr.close();

    return 0;
}
