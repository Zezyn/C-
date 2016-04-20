#include<iostream>

using namespace std;

void printMenu();
char getResponse();

int main()
{

    char yes_no = 'y';
    do
    {
        printMenu();
        yes_no = getResponse();
    }while(yes_no == 'y');

    return 0;
}

char getResponse()
{
    char response;
    cout << "Do you want to continue? (y for yes, n for no): ";
    cin >> response;
    return response;
}

void printMenu()
{
    cout << "1 for metric to english units" << endl;
    cout << "2 for quadratic equation calculations" << endl;
    cout << "3 for gravitational force equation" << endl;
    cout << "Enter 1,2, or 3 > ";
    return;
}
