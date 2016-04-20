/*
    Filename: 2demarray.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 10/29/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;
//Declare global variables here
const int ROWS = 3;
const int COLS = 3;

//Declare functions here
void clear_board(char board[][COLS], int rows);
void print_board(char board[][COLS], int rows);
void set_board(char board[][COLS], int row, int col, char element);
int main() {

    char board[ROWS][COLS];

    clear_board(board, ROWS);
    set_board(board,0,0,'X');
    set_board(board,1,1,'X');
    set_board(board,2,2,'X');
    print_board(board, ROWS);

    return 0;
}

//Insert user defined functions here

void clear_board(char board[][COLS], int rows)
{
    for(int i = 0; i<rows;i++) {
        for(int j=0;j<COLS;j++) {
            board[i][j] = '*'; }
    }
}

void print_board(char board[][COLS], int rows)
{
    for(int i = 0; i < rows; i++) {
        for(int j=0;j<COLS;j++) 
            cout << board[i][j] << ' ';
        cout << endl; 
    }
}

void set_board(char board[][COLS], int row, int col, char element)
{
    board[row][col] = element;
}

bool has_diagonal(char board[][COLS], int rows, char check)
{
    bool flag=false;
    for(int i = 0;i<rows; i++)
    {   if(board[i][i] == check || board[i][(COLS-1) - i])
        { flag = true; }
        else { flag = false; break; }
    }

bool has_row(char board[][COLS], int rows, char
