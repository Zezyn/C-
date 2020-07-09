#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "bankaccount.h"
/**
 *
   A basic employee class that is used in many examples
   in the book "Computing Concepts with C++ Essentials"
*/
class Employee
{
public:
   /**
      Constructs an employee with empty name and no salary.
   */
   Employee();
   /**
      Constructs an employee with a given name and salary.
      @param employee_name the employee name
      @param initial_salary the initial salary
   */
   Employee(std::string employee_name, double initial_salary);
   /**
      Sets the salary of this employee.
      @param new_salary the new salary value
   */
   void set_salary(double new_salary);
   /**
      Gets the salary of this employee.
      @return the current salary
   */
   double get_salary() const;
   /**
      Gets the name of this employee.
      @return the employee name
   */
   std::string get_name() const;
   
   std::string get_last_name() const;

   void set_account(BankAccount* account);
   BankAccount get_account();
   
	std::string get_employee();
   
private:
   std::string name;
   std::string last_name;
   double salary;
   BankAccount *m_account;
};
#endif
