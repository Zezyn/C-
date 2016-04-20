//
// Created by Martin on 3/17/2016.
//

#include "board.h"
#include "Organism.h"
#include "Ants.h"

Board::Board(void) {
    for(int x=0;x<_board.length; x++) {
        for(int y=0; j<_board[x].length; y++) {
            Ants ants(board);
            board[x][y] = ants;
        }
    }
}

void Board::play() {
}

void Board::print_board() {
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            std::cout << board[i][j];
        }
    std::cout << endl;
    }
}
