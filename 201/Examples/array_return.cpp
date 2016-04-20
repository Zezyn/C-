#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


void zeroArray(int[],int);
void zeroArray(char[],int);
void fillArray(int[],int);
void fillArray(char[],int);
void printArray(const int[],int);
void printArray(const char[],int);

int main()
{

    int ar[100];
    char s_ar[80];
    int x;
    srand(time(0));
    /*
    cout << &x << endl;
    cout << ar << endl;
    cout << &ar[0] << endl;
    */
    /*
    zeroArray(ar,100);
    fillArray(ar,100);
    printArray(ar,100);
    */
    zeroArray(s_ar,80);
    fillArray(s_ar,80);
   // printArray(s_ar,80);
    s_ar[79] = '\0';
    cout << "s_ar=" << s_ar << endl;
    return 0;
}

void zeroArray(int ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = 0;
}

void zeroArray(char ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = '\0';
}


void printArray(const int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << " "; 
        if (i % 20 == 0)
            cout << endl;
    }
    cout << endl;
}

void printArray(const char ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << " "; 
        if (i % 20 == 0)
            cout << endl;
    }
    cout << endl;
}

void fillArray(int ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = rand() % 100 + 1;
}


void fillArray(char ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = static_cast<char>(rand() % 25 + 65);
}

