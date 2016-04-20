#include<iostream>
#include<cmath>

using namespace std;

double sum(double[],int);
double average(double[],int);

const int ARRAYSIZE = 5;
int main()
{

    double a[ARRAYSIZE] = {600.0 , 470.0 , 170.0 , 430.0 , 300.0};

    cout << average(a,ARRAYSIZE) << endl;
    cout << sqrt(pow(average()),2);

    return 0;
}

double sum(double a[],int size)
{
    int total = 0;
    for(int i=0;i < size;i++)
    {
        total += a[i];
    }
    return total;
}

double average(int a[],int size)
{
    return sum(a,size) / size;
}
