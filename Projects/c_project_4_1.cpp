/**
File: project_4_1.cpp
Description: Write a program that computes the annual after-tax cost of a new house for the first year of ownership. The cost is computed as the annual mortgage cost minus the tax savings. The input should be the price of the house and the down payment. The annual mortgage cost can be estimated as 3 percent of the initial loan balance credited toward paying off the loan principal plus 6 percent of the initial loan balance in interest. The initial loan balance is the price minus the down payment. Assume a 35 percent marginal tax rate and assume that interest payments are tax deductible. So, the tax savings is 35 percent of the interest payment. You program should use at least two function definitions and should allow the user to repeat this calculation as often as the user wishes.
Created: Thursday September 24, 2015
Author: Martin Hernandez
email: 7607920511m.h@gmail.com
*/

#include<iostream>

using namespace std;

double mortgage(double loan_balance);
//First Function declaration here
//Calculate Annual Mortgage = 3% of loan balance + 6% loan balance (interest)

double interest(double loan_balance);
//Second Function Here
//Calculate Interest = 6% of loan balance

double loan(double house_price, double down_payment);
//Third Function here
//Calculate Initial Loan Balance = House Price - Down Payment

int main()
{
//Declare Variables
double house_price;
double down_payment;
double loan_balance;
double tax;
//Ask User for Prices of the house
//Ask User for Down payment
cout << "What is the price of the house? " << endl;
cin >> house_price;

cout << "How much is the down payment? " << endl;
cin >> down_payment;

loan_balance = loan(house_price, down_payment);
tax = (interest(loan_balance)*.35);

//Display information
cout << endl << "House Price:" << house_price << endl << "Down Payment:" << down_payment << endl << "Loan:" << loan_balance << endl;
cout << "Your Interest is: " << interest(loan_balance) << endl << "Your Mortgage is: " << mortgage(loan_balance) << endl;
cout << "Your tax savings are: " << tax << endl;
cout << endl << "Your annual after-tax cost of a new house is: " << mortgage(loan_balance) - tax << endl;
    return 0;
}


//Third function = Calculate Loan Balance
double loan(double house_price, double down_payment)
{
        double loan;
        loan = house_price - down_payment;
        return (loan);
}

//Second Function = Calculate interest
double interest(double loan_balance)
{
        double interest;
        interest = (loan_balance * .06);
        return (interest);
}

//First Function here = Calculate Annual Mortgage = 3% of loan balance + 6% loan balance (interest)
double mortgage(double loan_balance)
{
        double mortgage;
        mortgage = (loan_balance * .03) + (loan_balance * .06);
        return (mortgage);
}
