#include<iostream>

using namespace std;

void delete_repeats(char[],int&);
void shiftleft(char[],int&,int&);
void print_array(char[],int);
int main()
{

    char *c_array=NULL;
    int arraysize;
    cout << "Enter the array size: " ;
    cin >> arraysize;
    c_array = new char[arraysize];
    c_array[0] = 'a';
    c_array[1] = 'a';
    c_array[2] = 'a';
    c_array[3] = 'b';
    c_array[4] = 'c';
    c_array[5] = 'd';
    c_array[6] = 'd';
    print_array(c_array,7);
    int size = 7;
    delete_repeats(c_array,size);
    print_array(c_array,size);
    return 0;
}

void delete_repeats(char a[],int& size) 
// size indicates number of positions held in the partial array
{
    int end = size;
    char prev=a[0];
    for (int i=0;i < end;i++)
    {
       if(prev == a[i])
       {
           shiftleft(a,i,size);
           size--;
       }
       else
           prev = a[i];
    }
    size++;
}

void shiftleft(char a[],int &start,int &end)
{
    for(int j=start;j < end;j++)
        a[j] = a[j+1];
}

void print_array(char a[],int size)
{
    for(int i=0;i< size;i++)
        cout << a[i] << " ";
    cout << endl;
}
