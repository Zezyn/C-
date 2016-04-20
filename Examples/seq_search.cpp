#include<iostream>

using namespace std;

int main()
{

    int ar[10] = {11,13,16,15,12,18,17,18,19,20};
    int key = 16; 
    for(int i=0;i< 10;i++)
    {
        if(ar[i] == key) 
        {
            cout << "key value was found at index number " << i << endl;
            break;
        }
    }
    return 0;
}
