#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{

    char num[15];
    int int_num[15];
	cin.getline(num,15);
	int d; 
	for(int i = 0;i < strlen(num);i++)
	{
	   int_num[i] = num[i] - '0';
	}

	for(int i = 0;i < strlen(num);i++)
	{
	   cout << int_num[i] << endl;
	}

	return 0;
}
