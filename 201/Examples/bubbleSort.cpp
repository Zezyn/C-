#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void bubbleSort(int [],int);
void swap(int&, int&);
void fillArrayRandom(int[],int);
void printArray(ostream&,int[],int);

int main()
{
	srand(time(0));

	const int VALUES=20;
	int list[VALUES];

	fillArrayRandom(list,VALUES);
	cout << "Before Sort:" << endl;
	printArray(cout,list,VALUES);
	bubbleSort(list,VALUES);
	cout << "---------" << endl << endl << "After Sort:" << endl;
	printArray(cout,list,VALUES);

	return 0;
}

void printArray(ostream& o,int list[],int size)
{
	for(int i=0;i < size;i++)
	{
		if(i != 0 && i % 20 == 0)
			o << endl;

		o << list[i] << " ";
	}

}

void fillArrayRandom(int list[],int size)
{
	for(int i=0;i < size;i++)
	{
		list[i] = rand() % 100 + 1;
	}
}

void bubbleSort(int list[],int size)
{
	/*
procedure bubbleSort( A : list of sortable items )
   repeat     
     swapped = false
     for i = 1 to length(A) - 1 inclusive do:
       // if this pair is out of order 
       if A[i-1] > A[i] then
         //swap them and remember something changed
         swap( A[i-1], A[i] )
         swapped = true
       end if
     end for
   until not swapped
end procedure
	*/
	bool swapped;	
	int count = 0;
	do
	{
		swapped = false;
		cout << endl;
	    printArray(cout,list,size);
		for(int i= 1;i <= size - 1;i++)
		{
			count++;
			if(list[i-1] > list[i])
			{
				swap(list[i-1],list[i]);
				swapped = true;
			}
		}
	    cout << "---------" << endl << "After Pass" << endl;
	}
	while(swapped);

	cout << endl<< count << " Visits" << endl;

}

void swap(int& a, int& b)
{
	int tmp=b;
	b = a;
	a = tmp;
}
