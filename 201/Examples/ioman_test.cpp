#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    cout.setf(ios::fixed);
    cout.unsetf(ios::showpoint);
    cout << "without showpoint" << endl;
    cout << "$" << setprecision(2)
                << 10.3  << endl
            <<"$" << 10.0  << endl
                << "$" << 20.5 << endl;

    cout << "with showpoint" << endl;
    cout.setf(ios::showpoint);
    cout << "$" << setprecision(2)
                << 10.3  << endl
            <<"$" << 10.0  << endl
                << "$" << 20.5 << endl;
    return 0;
}
