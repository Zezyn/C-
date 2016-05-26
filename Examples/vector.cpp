#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printVector(vector<int>&);
void printVector(vector<string>&);

int main()
{

    vector<int> v(10);

    vector<string> vs;
    
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    printVector(v);

    vs.push_back("It's");
    vs.push_back("a");
    vs.push_back("wonderful");
    vs.push_back("world");
    printVector(vs);

    return 0;
}

void printVector(vector<int>& v)
{
    for(int i=0;i < v.size();i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;

}

void printVector(vector<string>& v)
{
    for(int i=0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
