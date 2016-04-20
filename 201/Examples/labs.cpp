#include<iostream>

using namespace std;

bool occupied(int *labs[],int lab_number,int workstation);
void print_lab(int *labs[]);
bool logout(int *labs[],int lab_number,int workstation);

const int NUMBER_OF_LABS= 4;
const int LAB1 = 5;
const int LAB2 = 6;
const int LAB3 = 4;
const int LAB4 = 3;


int main()
{

	int *labs[NUMBER_OF_LABS];

	labs[0] = new int[LAB1];
	labs[1] = new int[LAB2];
	labs[2] = new int[LAB3];
	labs[3] = new int[LAB4];

	labs[2][1] =  49193;
	labs[3][0] =  99577;

	print_lab(labs,NUMBER_OF_LABS);

	return 0;
}

bool occupied(int *labs[],int lab_number,int workstation)
{
   return labs[lab_number][workstation] != 0;
}

bool logout(int *labs[],int lab_number,int workstation)
{
	// in this function set the labs array value to 0 
}

void print_lab(int *labs[],int NUMBER_OF_LABS)
{
	/*
	This is not the final function, but it is an example of how you can check if a 
	lab is occupied, hint . . use a loop.
	*/
	if(occupied(labs,2,3) != 0)
	{
		cout << "workstation is occupied" << endl;
	}
	else
	{
		cout << "workstation is not occupied" << endl;
	}
}

