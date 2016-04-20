#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

    ifstream source;
	char line[100];
//    string line;

    source.open("/home/tonningp/.vimrc");
    while( source.getline(line,100))
    {
		cout << line << endl;
    }
    return 0;
}
