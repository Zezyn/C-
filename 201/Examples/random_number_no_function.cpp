#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main()
{

    srand(time(0));

	int r;
	cout << "RAND_MAX: " << RAND_MAX << endl;
	for(int dice=0;dice < 5;dice++) {
	  r = random();
      //cout <<  r << endl; 
      cout << (r % 6 + 1) << endl; 
	}
    return 0;
}

