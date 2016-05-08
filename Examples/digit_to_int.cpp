#include<iostream>

using namespace std;

int digit_to_int(char);
int main()
{

    char c;
    cin >> c;
    cout << "c as a character is: "<<c << endl;
    cout << "c as ascii integer is: "<< int(c) << endl;
    cout << "c as integer is: "<< digit_to_int(c) << endl;
    return 0;
}

int digit_to_int(char c)
{
    if(c >= '0' && c <= '9')
        return int(c) - int('0');
}
