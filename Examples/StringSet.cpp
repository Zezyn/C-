#include<iostream>
#include<string>
#include<vector>>

using namespace std;

class StringSet
{
    public:
	     StringSet() {};
	     StringSet(string[],int);
		  void addString(string);
		  void printSet();
    private:
	     vector<string> set;
};

StringSet::StringSet(string s[],int size)
{
	for(int i=0;i<size;i++)
		set.push_back(s[i]);
}

void StringSet::addString(string s)
{
	set.push_back(s);
}

void
StringSet::printSet()
{
	for(int i=0;i < set.size(); i++)
		cout << set[i] << endl;
}

int main()
{

   string stringArray[5] = {"Hello","this","is","a","set"};

	StringSet s(stringArray,5);
	s.printSet();

	return 0;
}
