#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 1024;
   char ch;
   char lookAhead; 
	char buffer[SIZE];
   while(!cin.eof())
	{
		cin.getline(buffer,SIZE);
	   char *bPtr = buffer;
		char attribute[SIZE];
		char value[SIZE];
	   int location=0;
		while (*bPtr !='\0' && *bPtr != '\n')
		{
			location = 0;
			while(*bPtr != ':')
			{
				attribute[location] = *bPtr;
				location++;bPtr++;
			}
			attribute[location] = '\0';
			if(*bPtr == ':')
				bPtr++;
			location = 0;
			while(*bPtr != ',' && *bPtr != '\0')
			{
				value[location] = *bPtr;
				location++;bPtr++;
			}
			value[location] = '\0';
			if(*bPtr == '\0' || *bPtr == '\n')
				break;
			if(*bPtr == ',' )
				bPtr++;
			cout << "attribute = " << attribute << endl;
			cout << "value = " << value << endl;
		}
		
	}

	return 0;
}
