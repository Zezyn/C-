#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int shift_rand(int,int);

int main()
{

    srand(time(0));
	//cout << RAND_MAX << endl;
    int myvalue = shift_rand(1,10000);
	cout << (static_cast<double>(myvalue) / 1000.0);
    cout << shift_rand(1,100) << endl;
    cout << shift_rand(1,10000)/ 1000.0 << endl;
	cout << static_cast<char>(shift_rand(20,128)) << endl;
    return 0;
}

int shift_rand(int low,int high)
{
    return random() % high + low; 
}
