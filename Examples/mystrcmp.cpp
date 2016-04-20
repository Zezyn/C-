#include<iostream>

using namespace std;

int strcmp(char[],char[]);
int main()
{

    char a[] = "hello";
    char b[] = "hEllo";
    if(strcmp(a,b) == 0)
    {
        cout << "They are equal" << endl;
    }

    if(strcmp(a,b) < 0)
    {
        cout << "a is less b" << endl;
    }

    if(strcmp(a,b) > 0)
    {
        cout << "a is greater than b" << endl;
    }

    return 0;
}

int strcmp(char a[],char b[])
{
    int ret = 0;
    int i=0;
    while(a[i] != '\0')
    {
        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i] < b[i])
        {
            ret = -1;
            break;
        }
        else if(a[i] > b[i])
        {
            ret = 1;
            break;
        }
    }
    return ret;
}

