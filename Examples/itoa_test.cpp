/* itoa example */
#include <iostream>
#include <cstdlib>
#include <cstddef>

using namespace std;


int main ()
{
  int i;
  char buffer [33];
  cout <<  "Enter a number: ";
  cin >> i;
  itoa (i,buffer,10);
  cout << "decimal: " << buffer << endl;
  itoa (i,buffer,16);
  cout << "decimal: " << buffer << endl;
  cout <<  "hexadecimal: " << buffer << endl;
  itoa (i,buffer,2);
  cout << "binary: " << buffer << endl;
  return 0;
}
