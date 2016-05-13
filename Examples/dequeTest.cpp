#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

template<class I>
void printContainer(I,I);

template<class I>
void reset(I);

int main()
{

	deque<int> d;
	
	for(int i=0;i<52;i++){
	  d.push_back(i+1);
    }
	cout << "deque" << endl;
	cout << "------------------------------" << endl;
	printContainer(d.begin(),d.end());
	cout << "------------------------------" << endl;
	cout << "random_shuffle" << endl;
	cout << "------------------------------" << endl;
	for(int i=0;i<10;i++){
		random_shuffle(d.begin(),d.end());
		printContainer(d.begin(),d.end());
    }
	cout << "------------------------------" << endl;
	cout << "sort" << endl;
	cout << "------------------------------" << endl;
	sort(d.begin(),d.end());
    printContainer(d.begin(),d.end());

	cout << "------------------------------" << endl;
	cout << "binary_search" << endl;
	cout << "------------------------------" << endl;
	cout << "Contains 42? " << (binary_search(d.begin(),d.end(),42)?"Yes":"No")<<endl;
	cout << "Contains 53? " << (binary_search(d.begin(),d.end(),53)?"Yes":"No")<<endl;

	cout << "------------------------------" << endl;
	cout << "reverse" << endl;
	cout << "------------------------------" << endl;
	reverse(d.begin(),d.end());
    printContainer(d.begin(),d.end());


	cout << "------------------------------" << endl;
	cout << "remove 42,41,40,1" << endl;
	cout << "------------------------------" << endl;
	deque<int>::iterator pend = remove(d.begin(),d.end(),42);
    printContainer(d.begin(),pend);
	pend = remove(d.begin(),pend,41);
    printContainer(d.begin(),pend);
	pend = remove(d.begin(),pend,40);
    printContainer(d.begin(),pend);
	pend = remove(d.begin(),pend,1);
    printContainer(d.begin(),pend);

	return 0;
}


template<class I>
void printContainer(I begin,I end){
	for(; begin!=end;++begin)
		cout << *begin << " ";
	cout << endl;
}

template<class I>
void reset(I c){
	c.erase(c.begin(),c.end());	
	c.resize(20);
}
