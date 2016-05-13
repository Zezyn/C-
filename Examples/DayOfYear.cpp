#include<iostream>

using namespace std;

class SomeInnerClass{
}

class DayOfYear{

	public:
	    void output();
		 void set_month(int);
		 int get_month();
		 void set_day(int);
		 int get_day();

   private:
		 int month;
		 int day;
};

void DayOfYear::output()
{
	cout << month << " / " << day;
}

void DayOfYear::set_month(int m){
	month = m;
}

void DayOfYear::set_day(int d){
	day = d;
}
int main()
{
   DayOfYear d;

	d.output();

	return 0;
}
