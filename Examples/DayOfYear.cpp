#include<iostream>

using namespace std;

class DayOfYear
{
	private:
        int month;
        int day;
        int year;

    public:
        DayOfYear();
        DayOfYear(int,int,int);
        void set(int,int,int); 
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        int getMonth();
        int getDay();
        int getYear();
		bool isLeapYear();
        void print(); 
};

DayOfYear::DayOfYear()
{
    day = 1;
    month = 1;
    year = 1970;
}

DayOfYear::DayOfYear(int m,int d,int y)
{
    set(m,d,y);
}

void DayOfYear::setMonth(int m)
{
    if (m > 0 && m < 13)
        month = m;
    else
    {
        cout << "Invalid month, setting to 1" << endl;
        month = 1;
    }

}

int DayOfYear::getMonth()
{
    return month;
}

void DayOfYear::setDay(int d)
{
    if (d > 0 && d < 32)
    {
        if (month == 2 && day < 30)
            day = d;
        else
            day = 1;
    }
    else
    {
        cout << "Invalid day, setting to 1" << endl;
        day = 1;
    }
}

int DayOfYear::getDay()
{
    return day;
}


void DayOfYear::setYear(int y)
{

    if (y > 0)
        year = y;
}

int DayOfYear::getYear()
{
    return year;
}

void DayOfYear::print()
{
    cout << month << "/" << day << "/" << year << endl;
}

void DayOfYear::set(int m,int d,int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

void incrementMonth(DayOfYear&);

int main()
{

    DayOfYear dy1;
    dy1.setMonth(2);
    incrementMonth(dy1);
    DayOfYear dy2(13,35,2011);
    dy1.print();
	if(dy1.isLeapYear()){
		cout << "dy1 is a leap year" << endl;
    }
    dy2.print();
    return 0;
}

void incrementMonth(DayOfYear& dy)
{
    int m = dy.getMonth();
    m++;
    dy.setMonth(m);
}
