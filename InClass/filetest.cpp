
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	ofstream file1;
	ifstream file1_read;
	int randomnumber;

	file1.open("randomnumbers.txt");

	srand(time(0));

	for(int i=0; i < 1000; i++)
	{
	int x = rand() % 1000 + 1;
	file1 << x << endl;
	//file1 << rand() << endl;
	}
	file1.close();

	file1_read.open("randomnumbers.txt");
	
	for (int i=0; i<25; i++) {
		file1_read >> randomnumber;
		cout << randomnumber << endl;		
	}

	/*Tonnings example end of file (reads whole file)
	while (! file1_read.eof()) {
		file1_read >> randomnumber;
		cout << randomnumber << endl;
	} */
	return 0;
}
