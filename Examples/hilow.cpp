#include<iostream>

using namespace std;

int main()
{

    int score;

    cout << "Enter the score:" ;
    cin >> score;
    if ( score > 100 )
        cout << "High";
    else
        cout << "Low";

    return 0;
}
