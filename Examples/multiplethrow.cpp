#include<iostream>
#include<exception>

using namespace std;

class myexception1 : public exception
{
	public:
		virtual const char* what() const throw(){return "myexception1 error";};
} myex1 ;

class myexception2 : public exception
{
	public:
		virtual const char* what() const throw(){return "myexception2 error";};
} myex2 ;


int main()
{

   try
	{
		throw myex1;
	}
	catch(myexception1 except)
	{
		cout << except.what() << endl;
		try{
		    throw myex1;
		}
	   catch(myexception1 except)
		{
			throw myex2;
		}

	}
	catch(myexception2 except)
	{
		cout << except.what() << endl;
	}
	return 0;
}
