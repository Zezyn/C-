#include<iostream>

using namespace std;
template<class T>
class Stack
{
	public:
	  Stack();
	private:
	   T *data;
};

template<class T>
Stack<T>::Stack()
{
	data = new T[100];
}

int main()
{
   

	return 0;
}
