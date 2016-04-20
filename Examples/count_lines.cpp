#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ifstream ifstr("data.txt"); 
    char next_symbol;
    int line_count=0;

    while (!ifstr.eof())
    {
        ifstr.get(next_symbol);
        if(next_symbol == '\n' && !ifstr.eof())
            line_count++;
    }
    cout << "data.txt has " << line_count << " lines" << endl;
    return 0;
}
