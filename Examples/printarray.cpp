#include<iostream>

using namespace std;

void printArray(int*,int);

int main()
{
    
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(ar,10);
    return 0;
}

void  printArray(int* ar,int size)
{
    for(int i=0;i<size;i++)
        cout << ar[i] << " " << endl;
    cout << endl;
}
