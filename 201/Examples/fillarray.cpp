#include<iostream>
#include<cstring>

using namespace std;

void fillArray(char*,int,int);
int main()
{

    char s[20];
    cout << s << endl;
    fillArray(s,10,20);
    cout << s << endl;
    return 0;
}

void fillArray(char* s,int pos,int size)
{
    for(int i=0;i<size;i++)
        s[i] = ' ';
     strcpy(&s[pos],"ouch");
}
