#include<iostream>

using namespace std;

double find_average(double[],int);

const int N=5;
int main()
{

    double values[N] = {1.5,1.3,1.7,1.6,1.5};

    double average = find_average(values,N);
    cout << "average=" << average << endl;
    return 0;
}

double find_average(double x[],int size) {
    double total = 0.0;

    for(int i=0;i<size;i++)
        total += x[i];
    
    return total/size;
}
