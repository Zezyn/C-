#include<iostream>

using namespace std;

int main()
{

    char str[] = "Hello";

    //str[4] = 'o';

    for(int i=0;i < 6;i++)
    {
        cout << (static_cast<int>(str[i])) << endl;
    }

/*
    for(int i = 0;i < 256;i++)
    {
        if( i % 10 == 0)
            cout << endl;
        cout << i << "=" << static_cast<char>(i) << " ";
    }

*/
//    cout << str << endl;
    return 0;

}
