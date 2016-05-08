#include<iostream>
#include<string>
#include<list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;

struct Record
{
	string firstname;
	string lastname;
};

int main()
{

   list<string> the_list;
   list<Record> record_list;

	the_list.push_back("Hello There");

   Record r;
	r.lastname = "Smith";
	r.firstname = "John";
	record_list.push_back(r);
	r.lastname = "Jane";
	r.firstname = "Doe";
	record_list.push_back(r);
	r.lastname = "John";
	r.firstname = "Doe";
	record_list.push_back(r);

   list<string>::iterator the_list_it;
   list<Record>::iterator record_list_it;

	for (record_list_it = record_list.begin();record_list_it != record_list.end();record_list_it++)
		cout << *record_list_it.lastname << endl;

	return 0;
}
