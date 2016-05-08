#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

struct StudentInfo
{
	string name;
	int grade;
};

bool compareByName(const StudentInfo &a,const StudentInfo &b);

int main() {

	vector<StudentInfo> s;
	StudentInfo s1;
	s1.name = "Paul";
	s1.grade = 50;
	s.push_back(s1);
	s1.name = "Jalin";
	s1.grade = 90;
	s.push_back(s1);
	s1.name = "Anthony";
	s1.grade = 80;
	s.push_back(s1);
	s1.name = "Joshua";
	s1.grade = 93;
	s.push_back(s1);

	vector<StudentInfo>::iterator it;
	for(it = s.begin();it != s.end();it++){
		cout << it->name << endl;
    }
	cout << "-------------------------" << endl;
	sort(s.begin(),s.end(),compareByName);
	for(it = s.begin();it != s.end();it++){
		cout << it->name << endl;
    }
	return 0;
}

bool compareByName(const StudentInfo &a,const StudentInfo &b) {
   return a.name > b.name;	
}


