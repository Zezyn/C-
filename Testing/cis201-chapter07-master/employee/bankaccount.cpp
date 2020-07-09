#include<iostream>
#include "bankaccount.h"

BankAccount::BankAccount(double balance)
{
    m_balance = balance;
}

void BankAccount::print_balance()
{
    std::cout << "Balance is: " << m_balance << std::endl;
}
