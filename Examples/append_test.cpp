#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream outputfile;
    outputfile.open("output.txt",ios::app)
    for(int i=0;i < 3;i++)
    {
        outputfile << "This is line " << i << endl;
    }
    outputfile.close();
    return 0;
}
