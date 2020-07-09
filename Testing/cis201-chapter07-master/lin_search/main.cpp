#include<iostream>
#include<cstdlib>
#include<ctime>


void fill_array(int *array,int size)
{
    for(int i=0;i<size;i++)
        array[i] = rand() % 1000 + 1;

}

void print_array(int *array,int size)
{
    for(int i=0;i<size;i++)
        std::cout << array[i] << std::endl;
}

void swap(int& a,int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int * A, int n)
{
	bool swapped;
    int count=1;
	do
	{
	  swapped = false;
	  for(int i=1;i<n;i++)
	  {
		 if(A[i-1] > A[i]) 
         {
			swap(A[i-1],A[i]);
            swapped = true;
         }
      }
      n = n-1;

	} while(swapped);
}

int search(int *array,int key,int size)
{
    int index = -1;
    for(int i=0;i<size;i++)
    {
        if(array[i] == key)
        {
            index = i;
            break;
        }
            
    }
    return index;
}

const int ARRAY_SIZE = 100;

int main()
{
    srand(time(0));
    int *array = new int[ARRAY_SIZE];
    fill_array(array,ARRAY_SIZE);
    std::cout << "Before bubble_sort:" << std::endl;
//    print_array(array,ARRAY_SIZE);
    bubble_sort(array,ARRAY_SIZE);
    std::cout << "After bubble_sort:" << std::endl;
    int index = search(array,101,ARRAY_SIZE);
    if( index != -1)
        std::cout << "101 was found at index: " << index << std::endl;

//    print_array(array,ARRAY_SIZE);
	return 0;
}
