#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream addressfile;
    string name,phone,address,city,state,zip;
    addressfile.open("address.dat");
    for(int i=0;i< 3;i++)
    {
        cout << "Name:";
        getline(cin,name);
        cout << "Phone number:";
        getline(cin,phone);
        cout << "Address:";
        getline(cin,address);
        cout << "City:";
        getline(cin,city);
        cout << "State:";
        getline(cin,state);
        cout << "Zip Code:";
        getline(cin,zip);
        addressfile << name << "," << phone << "," << address << ",";
        addressfile << city << "," << state << "," << zip << endl;
    }
    addressfile.close();
    return 0;
}
