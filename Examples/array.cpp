#include<iostream>

using namespace std;

int main()
{

    char ar[3][3] = {{'a','b','c'},{'d','e','f'},{'g','h','i'}};

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
          cout << ar[i][j] << " " ;
      cout << endl;
    }
    return 0;
}
