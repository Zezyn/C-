//Program to demonstrate use of the Stack class.
#include <iostream>
#include "stack.h"
#include <string>
using namespace std;
using namespace stacksavitch;

int main( )
{
/*    Stack t;
    char next;

    cout << "Enter an equation: ";
    cin.get(next);
    
    while(next!='\n') {
        t.push(next);
        cin.get(next);
    }
*/
/*    Stack s;
    char next, ans;

    do {
        cout << "Enter a word: ";
        cin.get(next);
        while (next != '\n') {
            s.push(next);
            cin.get(next);
        }/*

        cout << "Written backward that is: ";
        while ( ! s.empty( ) )
            cout << s.pop( );
        cout << endl;

        cout << "Again?(y/n): ";
        cin >> ans;
        cin.ignore(10000, '\n');
    }while (ans != 'n' && ans != 'N');
*/

    Stack n;
    char ans;
    char next;
    int number;
    
    do {
        cout << "Enter an equation: ";
        cin.get(next);
        while(next != '\n') {
        n.push(next);
        cin.get(next);
        }
        while(! n.empty()) {
            cout << n.pop(); //Popping it off stack and printing
            cout << endl;
        }
        
        cout << "Again?(y/N): ";
        cin >> ans;
        cin.ignore(10000, '\n');
    } while (ans != 'n' && ans != 'N');


    return 0;
}
