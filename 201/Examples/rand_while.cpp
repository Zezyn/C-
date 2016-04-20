#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{

    srand(time(0));
    int count=0;
	do {
      cout << (rand() % 6 + 1) << endl;
	  count = count + 1;
	} while(count < 10);
    return 0;
}
