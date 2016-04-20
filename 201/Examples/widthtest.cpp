#include<iostream>

using namespace std;

int main () {
  cout << "12345678901234567890";
  cout << "12345678901234567890";
  cout << "12345678901234567890" << endl;
  cout.width(15);
  cout << "Month" << width(15) << "Current" << endl;
  cout.width(10);
  cout << 100 << endl;
  cout.fill('x');
  cout.width(15);
  cout << left << 100 << endl;
  return 0;
}
