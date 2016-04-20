#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int ROWSIZE=25;
const int COLSIZE=25;

void fillMatrix(char[][COLSIZE],char);
void drawHist(char[][COLSIZE],char,int,int);
void printMatrix(char[][COLSIZE]);

int main()
{

    char matrix[ROWSIZE][COLSIZE];
    fillMatrix(matrix,' '); 
	for(int i = 0; i< COLSIZE;i++)
	{
	    matrix[0][i] = ((i+1) % 10) + 48;
    }
	matrix[1][5] = '*';
	matrix[2][5] = '*';
	matrix[3][5] = '*';

	matrix[4][6] = '*';
	matrix[4][7] = '*';

	//drawHist(matrix,'*',column,number of elements);
	/*
	for(int row=0;row < ROWSIZE;row++)
	{
		drawHist(matrix,'*',row,ROWSIZE-row);
	}
	*/
    printMatrix(matrix);
    return 0;
}

void fillMatrix(char m[][COLSIZE],char c)
{
    for (int row=0;row < ROWSIZE;row++)
	{
        for(int col=0;col<COLSIZE-1;col++)
        {
            m[row][col] = c;
        }
		m[row][COLSIZE-1] = '\0';
	}
}

void printMatrix(char m[][COLSIZE])
{
    for (int i=0;i < ROWSIZE;i++)
    {
        for(int j=0;j<COLSIZE;j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

}
void drawHist(char m[][COLSIZE],char c,int colnumber,int numelements)
{
    for(int i=ROWSIZE-1;i > (ROWSIZE - numelements - 1);i--)
      m[i][colnumber] = c;
}
