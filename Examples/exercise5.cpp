/*
Description: Write out the problem definition
*/
#include<iostream>

using namespace std;

void compute_coins(int coinvalue,int& number,int& amountleft);
void printValues(int,int,int,int);
int getAmount();
char getResponse();

int main()
{
    char yes_no = 'y';
    int amount,amountleft=0,quarters=0,dimes=0,pennies=0;

    do
    {
        amount = getAmount();
        amountleft = amount;
        compute_coins(25,quarters,amountleft);
        compute_coins(10,dimes,amountleft);
        compute_coins(1,pennies,amountleft);
        printValues(amount,quarters,dimes,pennies);
        yes_no = getResponse();
        
    }while(yes_no == 'y');

    return 0;
}

char getResponse()
{
    char c;
    do
    {
        cout << "Do you want to continue? (y for yes, n for no): ";
        cin >> c;
        if (c != 'y' && c != 'n' )
            cout << "Invalid input, enter y or n" << endl;
    }while(c != 'y' && c != 'n');

    return c;
}

void compute_coins(int coinvalue,int& number,int& amountleft)
{
    //cout << "in compute_coins" << endl;
    if(coinvalue > 0)
    {
       number = amountleft / coinvalue;
       amountleft = amountleft % coinvalue;
    }
    else
    {
        cout << "coin value cannot be 0"<<endl;
        return;
    }
    //cout << "coinvalue=" << coinvalue << " number=" <<number<< endl;
    //cout << "amountleft" << amountleft<< endl;
}

void printValues(int amount,int quarters,int dimes,int pennies)
{
    cout << amount << " cents can be given as:" << endl;
    cout << quarters << " quarters(s) " << dimes << " dime(s) " << pennies << " penny(pennies)" << endl;

}

int getAmount()
{
    int amount;
    do
    {
       cout << "Enter in the amount left: ";
       cin >> amount;
       if ( !(amount >=0 && amount < 100) )
           cout << "Please enter a number between 0 and 100" << endl;
    }
    while( !(amount >=0 && amount < 100));

    return amount;
}
