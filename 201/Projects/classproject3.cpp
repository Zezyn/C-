#include<iostream>

using namespace std;

int main()
{

	int N = 100;
	double numerator = 1;
	double sum = 0.0;
	
	cout << "Value for N?" << endl;
	cin >> N;
		for(int i=0;i<=N;i++)
		{
		//cout << numerator << endl;
		//cout << (numerator / (2 * i + 1)) << endl;
		sum += numerator / (2 * i + 1);
		numerator *= -1; //This oscelates
		
		}
	cout << (sum*4) << endl;
	return 0;
}	
