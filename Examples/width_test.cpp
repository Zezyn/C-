#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void star_line(ofstream&,int);
int main()
{

    ofstream ofstr;
    ofstr.open("widthtest.dat");
    star_line(ofstr,50);
    ofstr << "Left justified" << endl;
    ofstr.setf(ios::left);
    for(int i=1;i < 11;i++)
    {
        ofstr.width(4);
        ofstr << i;
    }
    ofstr << endl;
    star_line(ofstr,50);
    ofstr << "Right justified" << endl;
    ofstr.setf(ios::right);
    for(int i=1;i < 11;i++)
    {
        ofstr.width(4);
        ofstr << i;
    }
    ofstr << endl;
    ofstr << "Test with manipulator" << endl;
    ofstr << 10 << setw(4) << 20 << setw(4) << 30 << setw(6) << 40 << endl;
    star_line(ofstr,50);
    return 0;
}

void star_line(ofstream& of,int n)
{
    for(int i=0;i < n;i++)
        of << '*';
    of << endl;
}
