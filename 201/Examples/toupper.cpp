#include<iostream>
#include<string>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{

	int i=0;
	char str[] = "Test String.\n";
	char *newStr = new char[strlen(str)];
	char c;
	string aStringObject;
	while (str[i]){
		c = str[i];
		newStr[i] = static_cast<char>(toupper(c));
		i++;
	}
	aStringObject = newStr;
	cout << aStringObject << endl;
	if (aStringObject.compare(newStr) == 0)
		cout << "They are equal" << endl;
	return 0;
}
