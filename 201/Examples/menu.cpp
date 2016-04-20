#include<iostream>

using namespace std;
void printMenu();
int getResponse();
void doResponse(int);

int main()
{
    
    int resp;
    printMenu();
    resp = getResponse();
    doResponse(resp);
    
    return 0;
}

void printMenu()
{

    cout << "***************************"<<endl;
    cout << "1: For email" << endl;
    cout << "2: For web browser" << endl;
    cout << "3: For FTP" << endl;
    cout << "4: to Exit" << endl;
    cout << "***************************"<<endl;
}

int getResponse()
{
    int r;
    do
    {
        cout << ">> ";
        cin >> r;
        if ((r < 1) || (r > 4))
        {
            cout << "Please enter a number between 1 and 4" << endl;
        }

    } while((r < 1) || (r > 4));
    return r;
}

void doResponse(int resp)
{

    switch(resp)
    {
        case 1:
                cout << "Will call the email program" << endl;
                break;
        case 2:
                cout << "Will call the web browser program" << endl;
                break;
        case 3:
                cout << "Will call the FTP program" << endl;
                break;
        case 4:
                cout << "Will Exit the menu"<< endl;
                break;
    }
}
