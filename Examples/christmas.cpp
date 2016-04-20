#include<iostream>
#include<string>

using namespace std;

int main()
{

    string repeat1 = "On the ";
    string repeat2 = " of Christmas my true love gave to me ";
    string days[12];
    string items[12];
    days[0] = "first";
    days[1] = "second";
    items[0] = "A partridge in a pear tree";
    items[1] = "Two turtle doves";
    string first = "first";
    string space = " ";
    string verse = repeat1 + space + first + endl;
    cout << repeat1 + days[0] << string( " day") << endl;
    return 0;
}
