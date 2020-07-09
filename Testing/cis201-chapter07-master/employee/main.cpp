#include <iostream>
#include <string>
#include <vector>
#include "employee.h"


int main()
{
	Employee employee;
	std::vector<Employee> employees;
	char new_employee_answer;
	
	std::string last_name;
	
	while(true) { 

		employee.get_employee(); //Prompts user for employee name and salary and returns employeee's last name
		employees.push_back(employee); //Pushes employee into vector
			
		std::cout << "Would you like to enter another employee? (y or n)" << std::endl;
		std::cin >> new_employee_answer;

		if(new_employee_answer == 'n' || new_employee_answer == 'N') { //Breaks loop if user doesn't want another employee
			break; 
		}
	}

	for(int index=0; index< employees.size(); index++) { //Loop for first employee

		int index2 = index + 1; //Used to compare employee 2
		
		if(index2<employees.size()) {			
			if(employees[index].get_last_name() == employees[index2].get_last_name()) { //Checks for same last names
			
				double salary_a = employees[index].get_salary();
				double salary_b = employees[index2].get_salary();
				
				salary_a = salary_a / .12;
				salary_b = salary_b / .12;
				
				//std::cout << employees[index].get_salary() << std::endl; //Gets salary for employee 1
				//std::cout << employees[index2].get_salary() << std::endl; //Gets Salary for employee 2
			
				BankAccount *account = new BankAccount(salary_a + salary_b); //Creates account for both employees
				
				employees[index].set_account(account); //Sets the account for employee 0
				employees[index2].set_account(account); //Sets the account for employee 1
				}
				else {
					BankAccount *account = new BankAccount(employees[index].get_salary());
					employees[index].set_account(account);
				}
		}
		else {
			break;
		}
	}
	
	for(int index = 0; index<employees.size();index++) {
		std::cout << std::endl << employees[index].get_name() << std::endl; //Gets and prints name
		employees[index].get_account().print_balance(); //Gets account and prints
    }
	
    return 0;
}