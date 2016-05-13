#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;
using std::string;

int main()
{

   vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
   vector<int>::iterator p = v.begin();

	while(p != v.end())
   {
		cout << *p << endl;
		p++;
	}


   vector<string> v2;


   
	return 0;
}
