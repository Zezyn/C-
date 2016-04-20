/**
File: project_3_7.cpp
Description: The value of e^x can be approximated by the sum. Write a program that takes a value x as input and outp                uts this sum for n taken to be each of the values 1 to 100. The program should also output e^x calculated using the                 predifed function exp. The function exp is a predefined function such that exp(x) returns an approximation to the va                lue e^x. The function exp is in the library with the header file cmath. Your program should repeat the calculation f                or new values of x until the user says she or he is through.
Created: Thurs September 22, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
        double denominator;
        double x = 0.0;
        double numerator = 0.0;
        double e = 0.0;

        cout << "What is the value for e? (e^n)?" << endl;
        cin >> e;

        for(double j=1; j<=100; j++)
        {
                denominator *= e; // This equals out to the factorial

                                for(double i=1; i<=100; i++) // e^i Numerator i^2, i^3, i^4...
                                {
                                numerator = pow(e, i);
                                }
        }
        cout << numerator<< endl;
        cout << denominator << endl;
        cout << numerator/denominator << endl;
        cout << exp(e) << endl;
    return 0;
}
