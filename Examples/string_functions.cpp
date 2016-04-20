#include<iostream>
#include<cstring>

using namespace std;
/*
strcpy
strcat
strcmp
strlen
*/
int main()
{

    char buffer[500];
    char a[] = "Christmas",b[20] = "Merry";
    //char a[] = "01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789";
    
    strcpy(buffer,b);
    cout << buffer << endl;
    //cout << strlen(buffer) << endl;

    strcat(buffer," ");
    strcat(buffer,a);
    cout << buffer << endl;

  //  strncpy(b,a,2);

  /*
    strcat(b,a);
    cout << strlen(b) << endl;
    cout << b << endl;
    */
    if(strcmp("abcde","abcde") == 0)
    {
        cout << "The strings are equal" << endl;
    }

    if(strcmp("apples","oranges") < 0)
    {
        cout << "a is less than b" << endl;
    }

    if(strcmp("oranges","apples") > 0)
    {
        cout << "a is greater than b" << endl;
    }
    return 0;
}
