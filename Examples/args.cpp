#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {

	cout << "The number of command line arguments is : " << argc << endl;
	cout << "The arguments are:" << endl;

	for (int i=0;i< argc;i++){
		cout << argv[i] << endl;
    }

	return 0;
}
