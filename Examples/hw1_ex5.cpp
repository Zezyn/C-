#include<iostream>

using namespace std;

int main()
{

   int number1,number2;
   int result;
   
	//prompt user for the 2 numbers
	cout << "Enter the 2 numbers that you want to add: ";
	cin >> number1 >> number2;

	result = number1 + number2;

	cout << "The sum of your numbers is: " << result << endl;

	return 0;
}
