#include<iostream>
#include<cstdlib>

using namespace std;

void bad_function();

int main()
{

    cout << "Before bad_function:" << endl; 
    bad_function();
    cout << "after bad_function:" << endl; 
    return 0;
}

void bad_function()
{
    exit(1);
}

