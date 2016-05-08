#include<iostream>

using namespace std;

int gcd(int,int);

int main()
{

   cout << gcd(1071, 462) << endl;
	return 0;
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
   else
		return gcd(b,a % b);
}
