#include<iostream>
#include<cmath>

using namespace std;

const int N= 5;
int main()
{

    double x[N];

    x[0] = 1.5;
    x[1] = 1.3;
    x[2] = 1.6;
    x[3] = 1.7;
    x[4] = 1.5;

    double average;
    double total=0.0;

// Let's find the average
    for(int i=0;i<N;i++)
       total += x[i];
//Average is total / number of elements
    average = total / N;

    // Find the sum of the deviation from the the average squared
    total = 0.0;
    for (int i=0;i<N;i++)
        total += pow((x[i]-average),2);

    //Find the standard deviation

    double std_dev = sqrt(total/N);

    cout << "The standard deviation is: " << std_dev << endl;

    return 0;
}
