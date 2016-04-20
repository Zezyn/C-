#include<iostream>

using namespace std;

int main()
{

    char *hellostr;
    char *hellostr2;
    hellostr = new char[10];
    hellostr2 = hellostr;
    cout << hellostr << endl;
    cout << &hellostr << endl;
    hellostr[0] = 'h';
    hellostr[1] = 'e';
    hellostr[2] = 'l';
    hellostr[3] = 'l';
    hellostr[4] = 'o';
    hellostr[5] = '\0';
    cout << hellostr << endl;
    cout << *hellostr << endl;
    cout << *hellostr2 << endl;
    hellostr2++;
    cout << *hellostr2 << endl;
    hellostr2++;
    cout << *hellostr2 << endl;
    hellostr2++;
    cout << *hellostr2 << endl;
    hellostr2++;
    cout << *hellostr2 << endl;
    return 0;
}
