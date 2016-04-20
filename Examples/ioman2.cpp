// modify showpoint flag
#include <iostream>
using namespace std;

int main () {
  double a, b, pi;
  a=30.0;
  b=10000.0;
  pi=3.1416;
  cout.precision (5);
  cout <<   showpoint << a << '\t' << b << '\t' << pi << endl;
//  cout << noshowpoint << a << '\t' << b << '\t' << pi << endl;
  cout.unsetf(ios::showpoint);
  cout <<  a << '\t' << b << '\t' << pi << endl;
  return 0;
}
