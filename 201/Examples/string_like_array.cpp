#include<iostream>
#include<string>

using namespace std;

int main()
{

    string str = "abcdefghijklmnopqrstuvwxyz";
    string nstr= "01234567890123456789012345";

    cout << str[10] << endl;
    cout << str.length() << endl;
    cout << str.find("lmno") << endl;
    return 0;
}
