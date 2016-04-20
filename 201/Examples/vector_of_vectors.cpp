#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{

    vector< vector<string> > board;
    vector<string>line;
    line.push_back("Hello");
    line.push_back("there");
    line.push_back("this is a line");
    board.push_back(line);
    line.clear();
    line.push_back("this");
    line.push_back("is");
    line.push_back("another");
    line.push_back("line");
    board.push_back(line);
    cout << board[0][1] << endl;

    return 0;
}
