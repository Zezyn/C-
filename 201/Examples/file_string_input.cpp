#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>


using namespace std;

int main()
{

    ifstream ifs("file_string_input.cpp");
    string buffer;

    if(ifs.fail())
    {
        cout << "Problem reading file" << endl;
        exit(1);
    }

    while(!ifs.eof())
    {
//        getline(ifs,buffer);
        ifs >> buffer;
        cout << buffer << endl;
    }
    return 0;
}
