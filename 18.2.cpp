#include<iostream>
#include<string>

using namespace std;

class StudentData
{
   public:
	   StudentData();
	   StudentData(string,int);
		bool operator<(StudentData& lhs);
	private:
	   string name;
	   int grade;
};

StudentData::StudentData(){
	name = "Generic Student";
	grade = 0;
}

StudentData::StudentData(string _name,int _grade){
	name = _name;
	grade = _grade;
}

bool StudentData::operator<(StudentData& rhs)
{
	return (grade < rhs.grade);
}

int main()
{

   StudentData s1("Doe,John",98);
   StudentData s2("Doe,Jane",97);

	cout << (s1 < s2) << endl;
	return 0;
}
