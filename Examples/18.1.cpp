#include<iostream> 
#include<deque> 

using namespace std;

int main()
{


   deque<double> d;
	d.push_back(3.4);
	d.push_back(1.4);
	d.push_back(5.4);
	d.push_back(1.3);
	for (deque<double>::iterator p = d.begin(); p != d.end(); p++)
		cout << *p << endl;
	sort(d.begin(),d.end()); 

	for (deque<double>::iterator p = d.begin(); p != d.end(); p++)
		cout << *p << endl;
	return 0;
}
