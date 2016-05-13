#include<iostream>

using namespace std;

int delete_repeats(char*,int);
void shift_left(char*,int,int);
void print_array(char*,int);

int main()
{

   char a[10];
	a[0] = 'a';
	a[1] = 'a';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'a';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = 'h';
	a[8] = 'a';
	a[9] = 'a';

   int size = 10;
	cout << "Before: ";
	print_array(a,size);
	int current_size = delete_repeats(a,size);
	cout << "After: ";
	print_array(a,current_size);

	return 0;
}

/*
   delete_repeats
	Description: deletes repeating elements in the array
	parameters: char* ar - the array to scan
	            int elements - the number of elements in the array
   returns: the current number of elements after the delete
*/
int delete_repeats(char* ar,int elements)
{
	int current_size = elements;
	for(int i=0;i < current_size;i++)
		for(int j=i+1;j<current_size;j++)
			if(ar[j] == ar[i])
				shift_left(ar,j--,current_size--);
	return current_size;
}

/*
   shift_left
	description: shifts the elements from the given position over one element to the "left" of the array
	parameters: char* ar - the array that has the element
	            int position - the position of the element to "delete"
					int elements - the number of elements in the array
   returns: void
*/ 
void shift_left(char* ar,int position,int elements)
{
	
	for(int i=position+1;i < elements;i++)
		ar[i-1] = ar[i];
}

void print_array(char *ar,int size)
{
	for (int i=0;i<size;i++)
		cout << ar[i] << " ";
   cout << endl;
}
