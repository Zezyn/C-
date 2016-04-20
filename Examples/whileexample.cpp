#include<iostream>

using namespace std;

int main()
{

    int count_down = 10;

	while( count_down >= 0 )
	{
		cout << count_down << endl;
		count_down = count_down - 1;
	}
    
	while( count_down  <  10 )
	{
		cout << count_down << endl;
		count_down = count_down + 1;
	}


	return 0;
}
