#include<iostream>

using namespace std;

int main()
{
    double guess;
    double n;
    /*
    1. Make a guess at the answer
       previous_guess = guess
    2. Compute r = n / guess
    3. guess = (guess + r) / 2
    4. repeat until (guess - previous_guess) / 100 > .01
    */
    cout << "Enter root: " ;
    cin >> n;
    cout << "Enter initial guess : " ;
    cin >> guess;
    double previous_guess = guess;
    double r;
    do
    {
        previous_guess = guess;
        r = n /guess;
        guess = (guess + r) / 2;
        cout << "guess=" << guess << endl;
        cout << "previous_guess=" << previous_guess << endl;
    }while((previous_guess - guess) > 0.01);
    cout << "The root is: " << guess << endl;
    cout << "The root is: " << previous_guess << endl;
    return 0;
}
