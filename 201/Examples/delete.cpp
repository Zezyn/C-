#include<iostream>
#include<string>

using namespace std;

string* deleteEntry(string* da, int &size, string entryToDelete);

void printArray(string*,int);
int main()
{
   int size = 10;
   string* array = new string[10];
	array[0] = "hello";
	array[1] = "good bye";
	array[2] = "good bye";
	array[3] = "good bye";
	array[4] = "good bye";
	array[5] = "good bye";
	array[6] = "";
	array[7] = "";
	array[8] = "";
	array[9] = "";

   string stringtofind = "hello";

	printArray(array,size);
   deleteEntry(array,size,stringtofind);
	printArray(array,size);
	return 0;
}

string* deleteEntry(string* da, int &size, string entryToDelete)
{
	bool found = false;
	for(int i=0; i<size;i++)
	{
     if(entryToDelete == da[i])
	  {
		  found = true;
		  break;
	  }
   
  }
     if(found)
	  {
        string* newArray = new string[size - 1];
		  int count = 0;
		  for(int j = 0;j<size;j++)
		  {
           if(entryToDelete != da[j])
			  {
				  newArray[count] = da[j];
				  count++;
			  }
	     }
		  delete [] da;
		  size--;
        da = newArray;
	  }
	return da;
}

void printArray(string* array,int size)
{

	for (int i = 0;i< size; i++)
	{
		cout << array[i] << endl;
	}

}

