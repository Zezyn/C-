#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{

    char my_string[80];
    int first_number[80];
	char c;
    int count = 0;

	cout << "Enter the string:";

	//cin.getline(my_string,80);
	c = ' ';
	while(c != '\n')
	{
		c = cin.get();
		first_number[count] = (static_cast<int>(c)) - 48;
		if( c == '\n' ) 
			break;
		count++;
    } 

	//for(int i = 0;i<strlen(my_string);i++){
//		cout << (static_cast<int>(my_string[i])-48) << endl;
		//first_number[i] = static_cast<int>(my_string[i])-48;
 //   }

	for(int i = 0;i<count;i++){
		cout << first_number[i] << endl;
	}

	return 0;
}

