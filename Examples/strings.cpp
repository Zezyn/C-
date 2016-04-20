#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{

    cout << atoi("1234") << endl;
    cout << atoi("1234#") << endl;
    cout << atoi("12#34#") << endl;
    cout << atoi("#1234") << endl;
    return 0;
}
