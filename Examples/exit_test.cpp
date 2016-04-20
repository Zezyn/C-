#include<iostream>
#include<cstdlib>

using namespace std;

void bad_function();

int main()
{

   cout << "do a bunch of stuff prior" <<endl;
   bad_function();
   cout << "do a bunch of stuff after" <<endl;
	return 0;
}

void bad_function() {
	cout << "Hull breach" << endl;
	exit(1);
}
