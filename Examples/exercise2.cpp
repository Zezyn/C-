#include<iostream>

using namespace std;
void getTime(int&,int&,int&,int&);
void printTime(int,int,int,int);

int main()
{

    int currentHours,currentMinutes,hourWait,minutesWait;
    // do the following in a loop, asking the user if they want to continue
    getTime(currentHours,currentMinutes,hourWait,minutesWait);
    printTime(currentHours,currentMinutes,hourWait,minutesWait);
    return 0;
}

void getTime(int&  currentHours,int& currentMinutes,int& hourWait, int& minutesWait)
{
    // get the time from the user
}

void printTime(int  currentHours,int currentMinutes,int hourWait, int minutesWait)
{
    // print out the time after the wait
}
