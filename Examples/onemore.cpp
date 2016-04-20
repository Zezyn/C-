#include<iostream>

using namespace std;

void onemore(int[],int);
void printArray(int[],int);
int main()
{

    int a[5] = {10,20,30,40,50};
    onemore(a,5);
    printArray(a,5);
    return 0;
}

void onemore(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        a[i] += 1;
    }
}

void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout << a[i] << endl;
}    
