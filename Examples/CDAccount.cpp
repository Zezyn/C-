#include<iostream>

using namespace std;

class CDAccount
{
    public:
        double balance;
        double interest_rate;
        int term;
   public:
        CDAccount();
        CDAccount(double,double,int);
        void setBalance(double);
        void setInterest_rate(double);
        void setTerm(int);
        void print();
};

CDAccount::CDAccount()
{
    balance = 0.0;
    interest_rate = 0.0;
    term = 0;
}

CDAccount::CDAccount(double _balance,double _interest_rate,int _term)
{
    balance = _balance;
    interest_rate = _interest_rate;
    term = _term;
}

void CDAccount::print()
{
    cout << "----------------------------------------" << endl;
    cout << "Balance:" << balance << endl;
    cout << "Interest Rate:" << interest_rate << endl;
    cout << "Term:" << term << endl;
    cout << "----------------------------------------" << endl;
}

void CDAccount::setBalance(double b)
{
    if(b >= 0.0)
        balance = b;
    else
        balance = 0.0;
}

void CDAccount::setInterest_rate(double i)
{
    if(i >= 0.0)
        interest_rate = i;
    else
        interest_rate = 0.0;
}

void CDAccount::setTerm(int t)
{
    if(t >= 0)
        term = t;
    else
        term = 0;
}


void getCD_data(CDAccount&);

int main()
{
    CDAccount my_account(100.00,.15,25),your_account;
    getCD_data(your_account);
    my_account.print();
    your_account.print();
    return 0;
}

void getCD_data(CDAccount& c)
{
    double balance,interest_rate;
    int term;
    cout << "Enter the balance for your_account:";
    cin >> balance;
    c.setBalance(balance);
    cout << "Enter the interest rate for your_account:";
    cin >> interest_rate;
    c.setInterest_rate(interest_rate);
    cout << "Enter the term for your_account:";
    cin >> term;
    c.setTerm(term);
}
