#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    for(int i=0;i<255;i++){
		cout << static_cast<char>(i) << setw(4) << i << endl;
	}
	return 0;
}
