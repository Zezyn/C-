#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{

    vector<int>	vec;
    vector<string>	s_vec;

    for (int i = 0;i< 1000;i++)
	{
		vec.push_back(i);
		s_vec.push_back("Hello");
	}
 
    cout << s_vec[0] << endl;
    cout << s_vec[1] << endl;
	cout << "vec.size() = " << vec.size() << endl;
	cout << "vec.capacity() = " << vec.capacity() << endl;
	cout << "s_vec.capacity() = " << vec.capacity() << endl;

	return 0;
}
