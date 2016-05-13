#include<iostream>

using namespace std;

int main()
{

    char *names[5] = {
        "John",
        "James",
        "Paul",
        "Joe",
        "Jane"
    };

    int scores[5][2] = {
     //  index score 
        {0,40000},
        {4,20000},
        {1,9000},
        {2,8000},
        {3,6000},
    };

    for(int i=0;i<5;i++)
        cout << names[scores[i][0]] << " " << scores[i][1] << endl;

    return 0;
}
