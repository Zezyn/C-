#include<iostream>

using namespace std;
void swap(int&,int&);
int main()
{

    int a = 5,b = 10;
    cout << "a=" << a << " b=" << b << endl;
    swap(a,b);
    cout << "a=" << a << " b=" << b << endl;
    return 0;
}

void swap(int& v1,int& v2)
{
    int temp = v2;
    v2 = v1;
    v1 = temp;
    return;
}
