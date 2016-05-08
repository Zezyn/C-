#include<iostream>

using namespace std;

void swap(char&,char&);
void reverse(char*,int);

int main()
{
	int length;
	cout << "Enter in the length: ";
	cin >> length;
	cin.ignore();

	char  mystring[27] = "abcdefghijklmnopqrstuvwxyz";
	char * mystring = new char [length];
	cout << "Enter in the string to reverse:";
   cin.getline(mystring,length+1);
   
	cout << mystring << endl;
	reverse(mystring,length);
	cout << mystring << endl;
	return 0;
}

void reverse(char* s,int length)
{
	char *front=s,*rear = &s[length-1];

	while(front < rear)
	{
		swap(*front,*rear);
		front++;rear--;
	}

}












void swap(char &a,char &b)
{
	char temp;

	temp = a;
	a = b;
	b = temp;
}
