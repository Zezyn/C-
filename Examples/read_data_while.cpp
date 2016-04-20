#include<iostream>
#include<fstream>

using namespace std;

void input_data(ifstream&,double[],int&);

const int MAXSIZE = 100;

int main()
{
    double data[MAXSIZE];
    int size=0;
    ifstream infile("rainfall_current.dat");
    input_data(infile,data,size);
    return 0;
}

void input_data(ifstream& ifs,double d[],int& size)
{
    while(!ifs.eof())
    {
        ifs >> d[size];
        size++;
    }
    size = size - 1;
}
