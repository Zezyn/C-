#include<iostream>
#include<cstdlib>
#include<ctime>
/*
Algorithm for this sort is found at 
http://en.wikipedia.org/wiki/Selection_sort#Algorithm
*/
using namespace std;

void fill_ar(int a[],int n);
void sel_sort(int a[],int n);
void print_array(int a[],int n);
void swap(int a[],int i,int j);
const int SIZE = 20;
int main()
{
    srand(time(0)); 
    int a[SIZE];
    fill_ar(a,SIZE);
    print_array(a,SIZE);
    sel_sort(a,SIZE);
    print_array(a,SIZE);
    return 0;
}

void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
        if((i+1 % 20) == 0)
            cout << endl;
    }
}

void fill_ar(int a[],int n)
{
   for(int i=0;i<n;i++)
        a[i] = rand() % 100 + 1;
}

void sel_sort(int a[],int n)
{
    /* a[0] to a[n-1] is the array to sort */
    int iPos;
    int iMin;
     
    /* advance the position through the entire array */
    /*   (could do iPos < n-1 because single element is also min element) */
    for (iPos = 0; iPos < n; iPos++) {
        /* find the min element in the unsorted a[iPos .. n-1] */
     
        /* assume the min is the first element */
        iMin = iPos;
        /* test against all other elements */
        for (int i = iPos+1; i < n; i++) {
            /* if this element is less, then it is the new minimum */  
            if (a[i] < a[iMin]) {
                /* found new minimum; remember its index */
                iMin = i;
            }
        }
     
        /* iMin is the index of the minimum element. Swap it with the current position */
        if ( iMin != iPos ) {
            swap(a, iPos, iMin);
        }
    }
}

void swap(int a[],int i,int j)
{
   int temp;
   temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}
