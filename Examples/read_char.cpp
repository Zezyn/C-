#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ifstream ifstr("data.txt"); 
    char next_symbol;

    while (!ifstr.eof())
    {
        ifstr.get(next_symbol);
        cout << "char is: " << next_symbol
             << " - ascii number is: " << static_cast<int>(next_symbol) << endl;
    }
    return 0;
}
