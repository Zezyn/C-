#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool is_punc(char);
bool is_nl(char);
bool is_space(char);
int main()
{
    string s;
    vector<string> v;
    char c;
    int count = 0;
    while(c != '\n')
    {
        c = cin.get();
        if(is_space(c) || is_nl(c))
        {
            v.push_back(s);
            s.clear();
        }
        else if(!is_punc(c))
        {
            s += c;
        }
        if(c == '\n')
        {
            break;
        }
    }
    for(int i=0;i < v.size();i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

bool is_punc(char c)
{
    char punc[] = ".,?$&!";
    bool flag = false;
    int i = 0;
    while(punc[i] != '\0')
    {
        if(punc[i] == c)
        {
            flag = true;
            break;
        }
        i++;
    }
    return flag;
}

bool is_space(char c)
{
    return c == ' ';
}

bool is_nl(char c)
{
    return c == '\n';
}
