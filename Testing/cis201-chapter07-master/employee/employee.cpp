#include <iostream>
#include <string>
#include "employee.h"

Employee::Employee()
{
   salary = 0;
}

Employee::Employee(std::string employee_name, double initial_salary)
{
   name = employee_name;
   salary = initial_salary;
   
}
void Employee::set_account(BankAccount* account)
{
    m_account = account;
}

BankAccount Employee::get_account()
{
    return *m_account;
}

void Employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double Employee::get_salary() const
{
   return salary;
}

std::string Employee::get_name() const
{
   return name;
}

std::string Employee::get_last_name() const
{
	return last_name;
}

std::string Employee::get_employee() //Prompts user for employee and puts them in the class variables
{
	
	int str;

	std::cout << "What is the employee name?" << std::endl;
	std::cin.ignore(); //Used to bypass endl   <------ Taking first letter out of name
	getline(std::cin, name); //Use getline for first last name

	std::cout << "What is the employee's salary?" << std::endl;
	std::cin >> salary;
	
	str = name.find(' '); //Finds space in string
	last_name = name.substr(str); //Cuts last name from string
	
	return last_name; //returns last name to main.cpp
	
}