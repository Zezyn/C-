#include<iostream>

using namespace std;

int foo(int,int);
int fooref(int&,int&);

int main()
{

    int x,a,b;
    a = 5;
    b = 10;
    x = foo(a,b);
    cout << "x=" << x << " a=" << a << " b=" << b << endl;
    x = fooref(a,b);
    cout << "x=" << x << " a=" << a << " b=" << b << endl;
    return 0;
}

int foo(int a,int b)
{
    a = a + 1; b = b + 3;
    return a + b;
}

int fooref(int& a,int& b)
{
    a = a + 1; b = b + 3;
    return a + b;
}
