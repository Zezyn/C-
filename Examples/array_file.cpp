#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

void fill_up(int [],int);
void print_array(int [],int);
void createdata(ofstream&,int);
void readdata(ifstream&,int [],int);
int average(int [],int);
void histograph(int [],int);
int rand_number(int,int);

const int ARRAY_SIZE = 10;

int main()
{
	ofstream ofile("randfile.dat");
    ifstream thiscanbewhateveriwant("randfile.dat");

    int ar[ARRAY_SIZE];

	srand(time(0));

	createdata(ofile,ARRAY_SIZE);
	readdata(thiscanbewhateveriwant,ar,ARRAY_SIZE);
	cout << "The average is: " << average(ar,ARRAY_SIZE) << endl;
    histograph(ar,ARRAY_SIZE);
	//print_array(ar,ARRAY_SIZE);

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
		a[i] = rand_number(1,25);
	}
}

void print_array(int a[],int size)
{
	for(int i=0;i < size;i++)
	{
		cout << a[i] << endl;
	}
}

void createdata(ofstream&  ofile,int size)
{
   for(int i=0;i<size;i++)
	   ofile << rand_number(1,25) << endl;
   ofile.close();
}

/**
 * readdata
 * this function will take a ifsteam reference and will
 * iteratively read data from the ifstream and place the values
 * into the given array

*/
void readdata(ifstream&  ifile,int ar[],int size)
{
	for(int i=0;i < size;i++)
		ifile >> ar[i];
}

int  average(int a[],int size)
{
   int total = 0;
   for(int i=0;i < size;i++)
   {
	   total += a[i];
   }
   return total / size;
}

void histograph(int a[],int size)
{
	for(int i=0;i< size;i++)
	{
		cout << i << " ";
		for(int j = 0;j < a[i];j++)
			cout << "*";
		cout << endl;
	}
}
