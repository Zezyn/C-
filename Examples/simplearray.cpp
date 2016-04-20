#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include <string>

using namespace std;


void zeroArray(int[],int);
void zeroArray(char[],int);
void fillArray(int[],int);
void fillArray(char[],int);
void fillMonths(string[]);
void loadGrades(ifstream&,int[],int);
void printArray(const int[],int);
void printArray(const char[],int);
void printArray(const string[],int);
void printArray(const string[],int);

double average(const int[],int);

int search(string,const string[],int);

const int NOT_FOUND = -1;

int main()
{

    const int STUDENTS = 20;
    int grades[STUDENTS];
    string monthlabels[12];
	string m;
    char s_ar[80];
	ifstream in_file("grades.dat");
    int x;

    zeroArray(grades,STUDENTS);
	loadGrades(in_file,grades,STUDENTS);
	cout << average(grades,STUDENTS) << endl;
    printArray(grades,STUDENTS);


	fillMonths(monthlabels);
//	cout << "Enter the month " ;
//	cin >> m;
//	cout << "The index is " << search(m,monthlabels,12);

	int i = 11;
    cout << monthlabels[i] << endl;

	/*
    srand(time(0));
	printArray(month,12);
    zeroArray(s_ar,80);
    fillArray(grades,STUDENTS);
    fillArray(s_ar,80);
    printArray(s_ar,80);
    s_ar[79] = '\0';
    cout << "s_ar=" << s_ar << endl;
	*/
    return 0;
}

void zeroArray(int ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = 0;
}

void zeroArray(char ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = '\0';
}


void printArray(const int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << " "; 
        if (i != 0 && i % 20 == 0)
            cout << endl;
    }
    cout << endl;
}

void printArray(const char ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << " "; 
        if ( (i != 0) && (i % 20 == 0))
            cout << endl;
    }
    cout << endl;
}

void printArray(const string ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << " "; 
        if ( (i != 0) && (i % 20 == 0))
            cout << endl;
    }
    cout << endl;
}

void fillArray(int ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = rand() % 100 + 1;
}


void fillArray(char ar[],int size)
{
    for(int i=0;i<size;i++)
        ar[i] = static_cast<char>(rand() % 25 + 65);
}


void fillMonths(string month[])
{
	month[0] = "Jan";
	month[1] = "Feb";
	month[2] = "Mar";
	month[3] = "Apr";
	month[4] = "May";
	month[5] = "Jun";
	month[6] = "Jul";
	month[7] = "Aug";
	month[8] = "Sep";
	month[9] = "Oct";
	month[10] = "Nov";
	month[11] = "Dec";
}

void loadGrades(ifstream& in_file,int grades[],int size)
{
	for(int i=0;i<size;i++)
	{
		in_file >> grades[i];
	}
}

double average(const int grades[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum += grades[i];
	}

	return static_cast<double>(sum) / static_cast<double>(size);
}

int search(string needle,const string haystack[],int size)
{
	int i=0;
	int found=NOT_FOUND;
	while (i < size)
	{
		if(haystack[i] == needle)
		{
			found = i;
			break;
		}
		i++;
	}

	return found;
}
