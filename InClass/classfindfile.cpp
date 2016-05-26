#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{

	string buffer;
//	char filename[20];
	ifstream tpl;
	cout << "Enter the template name: ";
	cin >> buffer;
	tpl.open(buffer.c_str());
	if(tpl.fail())
	{
		cout << buffer << "does not exist" << endl;
		exit(1);
	}
	
	while(! tpl.eof()) {
		getline(tpl,buffer);
		cout << buffer.length() << ":" << buffer << endl;
	}
	
	return 0;
}
