#include<iostream>

using namespace std;

void buildstring(char[],int);

int main()
{
    const int MAGIC = 10;

    char buffer[MAGIC];
	buildstring(buffer,MAGIC);
	cout << buffer << endl;
	buildstring(buffer,MAGIC);
	cout << buffer << endl;

	return 0;

}

void buildstring(char buffer[],int size) 
{
	char c;
	int index =0;
	cin.get(c);
	while(c != '\n')
	{
		if (index < size - 1)
		{
			buffer[index] = c;
		    cin.get(c);
		}
		else {
			break;
		}
		index++;
	}
	if (index == size - 1) {
		cin.putback(c);
	}
	cout << "index=" << index << endl;
	buffer[index] = '\0';
}
