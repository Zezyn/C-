#include<iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void clear_board(char board[][COLS],int rows);
void print_board(char board[][COLS],int rows);
void get_turn(char player,char board[][COLS]);
void set_board(char board[][COLS],int row,int col,char element);
bool has_diagonal(char board[][COLS],int rows,char check);
bool has_row(char board[][COLS],int rows,char check);

int main()
{

    char board[ROWS][COLS];
    clear_board(board,ROWS);
    while(true)
    {
        get_turn('X',board);
        print_board(board,ROWS);
        get_turn('O',board);
        print_board(board,ROWS);
    }

    return 0;
}

void get_turn(char player,char board[][COLS])
{
    bool is_valid_turn = false;
    bool is_valid_row = false;
    bool is_valid_col = false;
    int row,col;
    do
    {
        cout << "Player: " << player << endl;

        do
        {
            cout << "Enter the coordinates ([row,col]):";
            cin >> row >> col;
            if(row >= 0 && row < ROWS) 
            {
                is_valid_row = true;
            }

            if(col >= 0 && col < COLS) 
            {
                is_valid_col = true;
            }

        }while(!(is_valid_row && is_valid_col));

        if(board[row][col] == ' ')
        {
            is_valid_turn=true;
        }
        else
        {
            cout << "The coordinates are invalid, try again." << endl;
        }
    }while( !is_valid_turn);
    set_board(board,row,col,player);
}

void clear_board(char board[][COLS],int rows)
{
    for(int i = 0;i<rows;i++)
    {
        for(int j=0;j < COLS;j++)
           board[i][j] = ' '; 
    }
}

void print_board(char board[][COLS],int rows)
{
    for(int i = 0;i<rows;i++)
    {
        for(int j=0;j < COLS;j++)
           cout << board[i][j] << ' ';
        cout << endl;
    }
}

bool has_diagonal(char board[][COLS],int rows,char check)
{
    bool flag=false;
    for(int i = 0;i<rows;i++)
    {
        if(board[i][i] == check || board[i][(COLS-1) - i])
        {
            flag = true;
        }
        else 
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool has_row(char board[][COLS],int rows,char check)
{
    bool flag=false;
    return flag;
}

void set_board(char board[][COLS],int row,int col,char element)
{
    board[row][col] = element;
}
