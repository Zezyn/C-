#include<iostream>

using namespace std;

int main()
{

   double d = 25.67;
	int cents = static_cast<int>(25.67  * 100) % 100;

	cout << cents << endl;
	return 0;
}
