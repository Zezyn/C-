#include<iostream>

using namespace std;

int main()
{
	
    int number_of_bars;
	double one_weight;

	cout << "Enter the number of bars: ";
	cin >> number_of_bars;
	cout << "Enter the weight of one of the bars: ";
	cin >> one_weight;

	cout << "The total is: " << (number_of_bars * one_weight) << endl;

	cout << 'a' << endl;
	cout << "multiple character strings require \"'s " << endl;

	return 0;
}
