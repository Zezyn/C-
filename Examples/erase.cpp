#include<iostream>
#include<list>

using namespace std;

int main()
{

   list<int> l;
	l.push_back(1);
	cout << (*l.begin()) << endl;
	cout << ((*l.begin() == *l.end() )) << endl;

   list<int>::iterator it = l.begin();

	cout << *it << endl;

   l.erase(it);

	cout << ((*l.begin() == *l.end() )) << endl;
	return 0;
}
