#include<iostream>
#include<fstream>

using namespace std;
//This is a single line comment
int main()
{

//This is a single line comment
    ifstream ifstr("read_comment.cpp"); 
    char next_symbol;
    bool comment=false;

//This is a single line comment
    while (!ifstr.eof())
    {
        ifstr.get(next_symbol);
        if(next_symbol == '/' && !comment)
        {
            ifstr.get(next_symbol);
            if (next_symbol == '/')
//This is a single line comment
                comment = true;
        }
        else if (comment && next_symbol != '\n')
//This is a single line comment
        {
            cout << next_symbol;
        }
//This is a single line comment
        else if (comment && next_symbol == '\n')
        {
            comment = false;
            cout << endl;
        }
        else
            continue;
    }
    cout << endl;
    return 0;
}
