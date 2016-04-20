#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int add(int,int);
void swap(int&,int&);
void printArray(int[],int);
void initializeArray(int[],int);
void sort(int[],int);
const int ARRAY_SIZE = 25;

int main()
{

    int a[ARRAY_SIZE];
    srand(time(0));
    initializeArray(a,ARRAY_SIZE);
    printArray(a,ARRAY_SIZE);
    sort(a,ARRAY_SIZE);
    printArray(a,ARRAY_SIZE);

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

void swap(int& a,int& b)
{
    int temp= a;
    a = b;
    b = temp;
}

void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout << "a[" << i << "] = " << a[i] << endl;
    cout << endl;
    /*
    for(int i=0;i<ARRAY_SIZE;i++)
        cout << "address of a[" << i << "] is:" << &a[i] << endl;
    */
}

void initializeArray(int a[], int size)
{
    for(int i=0;i<size;i++)
        a[i] = random() % 100 + 1;
}

void sort(int a[],int size)
{
    /* The following algorithm is found on wikipedia
Pseudocode implementation

The algorithm can be expressed as:

procedure bubbleSort( A : list of sortable items ) defined as:
  do
    swapped := false
    for each i in 0 to length(A) - 2 inclusive do:
      if A[i] > A[i+1] then
        swap( A[i], A[i+1] )
        swapped := true
      end if
    end for
  while swapped
end procedure
    */
    bool swapped = false;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1;i++)
        {
            if( a[i] > a[i+1] )
            {
                swap(a[i],a[i+1]);
                swapped = true;
            }
        }
    }
    while(swapped);
}

