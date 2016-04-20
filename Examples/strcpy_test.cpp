#include<iostream>
#include<cstring>

using namespace std;

int main()
{

	char buffer[15];

//	strcpy(buffer,"0123456789001234567890012345678900123456789001234567890");
	strncpy(buffer,"0123456789001234567890012345678900123456789001234567890",14);
	cout << buffer << endl;
	return 0;
}
