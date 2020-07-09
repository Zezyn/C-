#include<iostream>


void print_ints(int *integers,int size)
{
    for(int i=0;i<size;i++)
        std::cout << integers[i] << std::endl;
}

int sum(int *integers,int size)
{
   int tmp = 0; 
   for(int i=0;i<size;i++)
       tmp += integers[i];
   return tmp;
}

int main()
{
    int *int_array = new int[10];
    for(int i=0;i<10;i++)
        int_array[i] = i;

    print_ints(int_array,10);

    delete [] int_array;


    return 0;
}
