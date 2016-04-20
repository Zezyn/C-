#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void fill_up(int [],int);
void print_array(int [],int);
int rand_number(int,int);

const int ARRAY_SIZE = 10;
int main()
{

    int ar[ARRAY_SIZE];
    double dar[ARRAY_SIZE];
    char car[ARRAY_SIZE];

    int i=0;
	cout << ar << endl;
    srand(time(0));
	fill_up(ar,ARRAY_SIZE);
	print_array(ar,ARRAY_SIZE);

    return 0;
}

int rand_number(int shift,int scale)
{
    return rand() % scale + shift;
}

void fill_up(int a[],int size)
{
	for(int i=0;i < size;i++)
	{
		a[i] = rand_number(1,100);
	}
}

void print_array(int a[],int size)
{
	for(int i=0;i < size;i++)
	{
		cout << a[i] << endl;
	}
}
