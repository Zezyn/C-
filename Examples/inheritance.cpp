/*
    Filename: inheritance.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/08/2016
    Description: 
*/
//Add libraries here
#include <iostream>
#include <string>

using namespace std;

class Employee {
    protected:
        string last_name, first_name, ssn;
        int dob_month,dob_day,dob_year;
    public:
        string get_lastname();
        void set_lastname(string&);

    
}; 

string Employee::get_lastname() {
    return last_name;
}

void Employee::set_lastname(const string& lname) {
    last_name = lname;
}

class Salaried : public Employee {
    private:
        double salary;
    public:
        void getSalary(double&);
        double getSalary();
};

void setSalary(double &s){
    salary = s;
}`

double Salaried::getSalary() {
    return salary;
}

class Hourly : public Employee {
    private:
        double rate;
    public:
        double get_hourly_rate();
        void set_hourly_rate();
    
};

int main() {
    Salaried s;
    Hourly h;
    e.set_lastname("Flinstone");
    e.set_salary(60000);
    h.set_lastname("Rubble");
    h.set_salary(10000);
    return 0;
}
