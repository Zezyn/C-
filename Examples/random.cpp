#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{

    srand(time(0));

	const int scale = 5;
	const int shift = 1;

    int random_number =  random() % scale + shift; 
	cout << random_number << endl;
	
	if(random_number == 1)
	{
		cout << "The number is 1" << endl;
	}
	else if(random_number == 2)
	{
		cout << "The number is 2" << endl;
	}
	else
	{
		cout << "Bad number" << endl;
	}
    return 0;
}
