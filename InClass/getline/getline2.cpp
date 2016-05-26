#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

void my_getline(istream&, strm, string & buffer);

int main()
{

	string buffer;
//	char filename[20];
	ifstream tpl;
	cout << "Enter the template name: ";
	cin >> buffer;
//	tpl.open(buffer.c_str());
	if(tpl.fail())
	{
		cout << buffer << "does not exist" << endl;
		exit(1);
	}
	
	while(! tpl.eof()) {
//		getline(tpl,buffer);
		my_getline(tpl,buffer);
		cout << buffer.length() << ":" << buffer << endl;
	}
	
	return 0;
}

void my_getline(istream&, strm, string & buffer)
{
	char c;
	buffer = "";
	while(strm.get())
	{
		if(c == '\n') 
			break;
		else 
			buffer += c;
	}
	
}

