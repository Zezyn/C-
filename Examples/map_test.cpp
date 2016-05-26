#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::endl;
using std::map;
using std::string;


int main()
{

   map<string,string> fruit;

	fruit["banana"] = "Yellow tropical fruit";
	fruit["orange"] = "Citrus fruit";

	cout << fruit["banana"] << endl;
	return 0;
}
