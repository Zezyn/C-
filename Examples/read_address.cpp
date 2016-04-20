#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{

    ifstream addressfile;
    string inputstring,token;
    addressfile.open("address.dat");
    if(addressfile.fail())
    {
       //exit the program 
       cout << "File does not exist, program aborted" << endl;
       exit(1);
    }
    while(! addressfile.eof())
    {
        getline(addressfile,inputstring);
        // We will use the istringstream object associated with the inputstring
        istringstream iss(inputstring);
        string token;
        int count=0;
        while ( getline(iss, token, ',') )
        {
            switch(count)
            {
                case 0: // name
                        cout << "Name: "<< token << endl;
                        break;
                case 1: // address
                        cout << "Address: "<< token << endl;
                        break;
                case 2: // phone
                        cout << "Phone Number: "<< token << endl;
                        break;
                case 3: // name
                        cout << "City: "<< token << endl;
                        break;
                case 4: // name
                        cout << "State: "<< token << endl;
                        break;
                case 5: // name
                        cout << "Zip: "<< token << endl;
                        break;
            }
            count++;
        }
    }
    addressfile.close();
    return 0;
}
