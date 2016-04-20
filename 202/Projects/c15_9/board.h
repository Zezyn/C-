//
// Created by Martin on 3/17/2016.
//

#ifndef C15_9_BOARD_H
#define C15_9_BOARD_H

#include "global.h"
#include "Organism.h"

class Board {
    private:
        board[ROWS][COLS];
        Organism(*board)[][];
    public:
        Board();
        void play();
        void print_board();
};

#endif //C15_9_BOARD_H
