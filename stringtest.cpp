#include<iostream>
#include<string>

using namespace std;

//bool operator< (StudentInfo&,StudentInfo&);
int main()
{

    //list<StudentInfo> s;
	//sort(s);
	cout << ((string("abc")<string("cde"))? "Yes" : "No") << endl;
	return 0;
}


/*
bool operator<(StudentInfo& a,StudentInfo& b)
{
	return a.name < b.name;
}
*/
