#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
public:
    BankAccount(double balance);
    void print_balance();
private:
    double m_balance;
};

#endif
