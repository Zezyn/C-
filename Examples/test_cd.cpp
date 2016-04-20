#include<iostream>
#include<cstring>

using namespace std;

const int NAMESIZE = 80;
struct CDAccount
{
    char *name;
    double balance;
    double interest_rate;
    int term;
};

void setCD(CDAccount*);

void printCD(CDAccount&);
void printCD(CDAccount*);

CDAccount shrink_wrap(const char*,double,double,int);

int main()
{
    CDAccount my_account,your_account;
	
	my_account.balance = 500.0;
	my_account.interest_rate = .03;
	my_account.term = 5;
	printCD(my_account);

    CDAccount *new_account = new CDAccount;
	new_account->balance = 500.0;
	new_account->interest_rate = .03;
	new_account->term = 5;
	cout << new_account << endl;

/*   
    CDAccount *acct_ptr = &my_account;
    setCD(&my_account);
    setCD(new_account);
    CDAccount cd = shrink_wrap("Shrink Wrapped CD",300.0,.09,20);
    printCD(&my_account);
    printCD(new_account);
    printCD(&cd);
	*/
    return 0;
}

CDAccount shrink_wrap(const char* name,double balance,double interest,int term)
{
    CDAccount temp;
    temp.name = new char[NAMESIZE];
    strcpy(temp.name,name);
    temp.balance = balance;
    temp.interest_rate = interest;
    temp.term = term;
    return temp;
}

void setCD(CDAccount* cd)
{
    
    cd->name = new char[NAMESIZE];
    cout << "Enter the name of the CD:"<<endl;
    cin.getline(cd->name,NAMESIZE);
    cout << "Enter the account balance for the CD:";
    cin >> cd->balance;
    cout << "Enter the interest rate for the CD:";
    cin >> cd->interest_rate; 
    cout << "Enter the term for the CD:";
    cin >> cd->term; 
    cin.ignore();
}


void printCD(CDAccount& cd)
{
    cout << "Name:" << cd.name << endl;
    cout << "Balance:" << cd.balance << endl;
    cout << "Interest Rate:" << cd.interest_rate << endl;
    cout << "Term:" << cd.term << endl;
}

void printCD(CDAccount* cd)
{
    cout << "Name:" << cd->name << endl;
    cout << "Balance:" << cd->balance << endl;
    cout << "Interest Rate:" << cd->interest_rate << endl;
    cout << "Term:" << cd->term << endl;
}
