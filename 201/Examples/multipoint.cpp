#include<iostream>

using namespace std;

int ** makearray(int,int);
int ** add(int **,int **,int,int);
void process();
void print(int **a,int,int);

int main()
{ 
	process();
    return 0;
}

void process() {
	int rows = 2;
	int cols = 2;
    int **a = makearray(rows,cols); 
	int *intptr = a[0];
	a[0][0] = 10;
	cout << "a[0][0] *intptr=" << *intptr << endl;
	a[0][1] = 11;
	intptr++;
	cout << "a[0][1] *intptr=" << *intptr << endl;
	intptr  = a[1];
	a[1][0] = 20;
	cout << "a[1][0] *intptr=" << *intptr << endl;
	a[1][1] = 21;
	intptr++;
	cout << "a[1][1] *intptr=" << *intptr << endl;
    int **b = makearray(rows,cols); 
	b[0][0] = 1;
	b[0][1] = 2;
	b[1][0] = 3;
	b[1][1] = 4;
	int **c = add(a,b,rows,cols);
    print(c,rows,cols);
}

int ** makearray(int rows,int cols)
{
    int **a;
    a = new int*[rows];
    for (int i=0;i<rows;i++)
        a[i] = new int[cols];
    return a;
}

int ** add(int** a, int** b,int rowsize,int colsize)
{
	int **c = makearray(rowsize,colsize);
	for (int row = 0;row < rowsize; row++)
		for(int col = 0;col < colsize;col++)
			c[row][col] = a[row][col] + b[row][col];
	return c;
}


void print(int **a,int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}
