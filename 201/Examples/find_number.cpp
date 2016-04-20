#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ifstream ifile("rand.txt");
	int x;
	while(! ifile.eof())
	{
       ifile >> x; 
	   if (x % 3 == 0) // we know that this is divisible by 3
	     cout << x << endl;
    }	
	return 0;
}
