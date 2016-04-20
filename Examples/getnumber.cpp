#include<iostream>

using namespace std;

void getInteger(int[],int&);
void initArray(int[],int);
void printInteger(int[],int);

const int MAXSIZE = 20;
int main()
{
    int integer1[MAXSIZE];
    int index1=0;
    initArray(integer1,MAXSIZE);
    getInteger(integer1,index1);
    printInteger(integer1,index1);
    cout << endl;
    return 0;
}

void getInteger(int integer[],int &index)
{
    char c;
    index = 0;
    int buffer[MAXSIZE] = {0};
    cout << "Enter the number: ";
    while((c = cin.get()) != '\n' && index < MAXSIZE)
    {
        buffer[index] = c - '0'; // this will convert the character to an integer
        index++;
    }
    int j = 0;
    for(int i=index-1;i >= 0;i--)
    {
        integer[j] = buffer[i];
        j++;
    }
}

void printInteger(int integer[],int size)
{
    for(int i=0;i<size;i++)
        cout << integer[i];

}

void initArray(int integer[],int size)
{
    for(int i = 0; i < size;i++)
        integer[i] = 0;
}
