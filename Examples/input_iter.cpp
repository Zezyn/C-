#include <string>
#include<iterator>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;
int main ()
{
  vector<int> v;
  istream_iterator<int> start (cin);
  istream_iterator<int> end;
  back_insert_iterator<vector<int> > dest (v);
 
  end++;
  copy (start, end, dest);
  sort(v.begin(), v.end());
//  vector<int>::iterator p = v.begin();
//  cout << "v.begin() = " << *p << endl;
  copy (v.begin(), v.end(), ostream_iterator<int>(cout, "\n"));

  return 0;
}  

