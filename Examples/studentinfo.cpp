#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct StudentInfo
{
    string name;
    int grade;
};


bool operator<(StudentInfo s1,StudentInfo s2)
{
    return (s1.name < s2.name);
}

bool comparestring (StudentInfo& s1,StudentInfo&  s2) { return (s1.name<s2.name); }

int main()
{

    vector<StudentInfo> sv;
    StudentInfo si;
    si.name = "Fred";
    si.grade = 100;
    sv.push_back(si);
    si.name = "Barney";
    si.grade = 99;
    sv.push_back(si);
    vector<StudentInfo>::iterator sit;
    //sort(sv.begin(),sv.end(),comparestring);
    sort(sv.begin(),sv.end());
    for(sit=sv.begin();sit != sv.end();sit++)
    {
        cout << (*sit).name << endl;
    }
    return 0;
}
