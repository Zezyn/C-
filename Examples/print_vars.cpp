#include<iostream>
#include<fstream>

using namespace std;

int add(int,int);
int main()
{
	int x,y;
	ifstream input_file;
	ofstream output_file;
	input_file.open("numbers.txt");
	output_file.open("result.txt");
    input_file >> x >> y;	
	output_file << add(x,y) << endl;

	return 0;
}

int add(int x,int y) {
	return x + y;
}
