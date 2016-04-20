#include<iostream>

using namespace std;

int main()
{
    const int SIZE=10;
    int *p=NULL;
    int *p2=NULL;
    int *p3=NULL;
    int arraysize=0;
    char *c=NULL;
    cout << "length of array you want to create: ";
    cin >> arraysize;
    p = new int; 
    p2 = new int[10];
    p3 = new int[arraysize];
    int *p3worker = p3;

    *p = 10;
    cout << "p is pointing to a variable with " << *p << " in it" <<endl;
    *p3worker = 1;
    p3worker++;
    *p3worker = 2;
    cout << "p3worker is pointing at " << *p3worker << endl;
    cout << "p3[1]" << p3[1] << endl;

    return 0;
}
