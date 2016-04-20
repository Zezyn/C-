#include<iostream>

using namespace std;

int main()
{

    //char *cptr=NULL;
    //int *x2ptr=NULL;
	char *myString = new char[10];
	char s[] = "Hello";
	myString[0] = 'H';
	myString[1] = 'e';
	myString[2] = 'l';
	myString[3] = 'l';
	myString[4] = 'o';
	myString[5] = '\0';
	cout << myString << endl;

	int array[7];
	int *arrayPtr;

    arrayPtr = array;

	array[0] = 99;
	array[1] = 98;
	array[2] = 97;
	array[3] = 96;
	array[4] = 95;
	array[5] = 94;
	array[6] = 93;

	cout << array << endl;
	cout << arrayPtr << endl;

    for (int i=0;i < 7;i++)
	{
//		*arrayPtr = i*10;
		cout << *arrayPtr << endl;
		arrayPtr++;
	}
    for (int i=0;i < 7;i++)
	{
		cout << array[i] << endl;
	}

	int arraysize;
    cout << "Enter the size of array that you want to create:";
	cin >> arraysize;
	int *intPtr = new int[arraysize];
    for (int i=0;i < arraysize;i++)
	{
		intPtr[i] = i * 10;
		cout << intPtr[i] << endl;
	}

/*
    int *xptr=NULL;
    int x = 10;
    int x2 = 30;
   
    cout << &x << endl;
	xptr = &x;
    cout << xptr << endl;
    cout << *xptr << endl;

*/

	//cptr = s;

	//cout << &s[0] << endl;
	//cout << s << endl;
	//cout << cptr << endl;

    //cout << xptr << endl;
    //xptr = &x;

    //x2ptr = &x2;
    //cout << xptr << endl;
    //cout << x2ptr << endl;
    //x2ptr = xptr;
    //cout << x2ptr << endl;
    //cout << xptr << endl;
/*
    xptr = &x2;
    cout << xptr << endl;
    cout << &xptr << endl;
    cout << *xptr << endl;
	*/
    

    return 0;
}

