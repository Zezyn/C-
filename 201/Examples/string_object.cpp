#include<iostream>
#include<string>


using namespace std;

int main()
{

    string a = "Hello";
    string b = "There";
    string c = a + string(" ") + b;
/*
    cout << "Content-type: text/html\n\r\n\r";
    cout << "<html>" << endl;
    cout << c << endl;
    cout << "</html>" << endl;
*/
    //cout << c[0] << endl;
    c += " I am a string";
    cout << c.length() << endl;
/*
    string input;

    getline(cin,input);
    cout << input << endl;
    getline(cin,input,'$');
    cout << input << endl;
    */

    if(string("abcd") > string("ABCD"))
    {
        cout << "Yes" << endl;
    }
    if(string("abcd") == string("abcd"))
    {
        cout << "Yes" << endl;
    }

    return 0;
}
