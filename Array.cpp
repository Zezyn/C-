#include<iostream>

using namespace std;

template<class T>
class Array
{
	private:
	  	T *ar;
		int _size;

    public:
		Array(){};
        Array(int size);
		int getSize(){return _size;}

};

Array::Array(int size){_size = size;};	


int main()
{
	Array<int> a;
	Array<char> c;
	Array<double> d;
	return 0;
}
