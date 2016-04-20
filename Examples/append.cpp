#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{

    //cout << "ios::app - " << ios::app << endl;
    ofstream ofile("important.txt",ios::app);
    //ofstream ofile;
    //ofile.open("important.txt",ios::app);
	ofile << "This is a line of text" << endl;
	ofile.close();
	return 0;
}
