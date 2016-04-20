#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

    ifstream source;
    ofstream sink;
//    string line;
    int random_number;

    source.open("randfile.dat");
    sink.open("outrand.dat");
    while( source >> random_number)
    {
       sink << random_number << " -> ";
       random_number = random_number * 100;
       sink << random_number << endl;
    }
    return 0;
}
