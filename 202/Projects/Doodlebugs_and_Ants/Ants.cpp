//
// Created by Martin on 3/14/2016.
//

#include "Ants.h"

Ants::Ants() {
    for(int i=0;i<ANTS;i++) {
        
    }
}

void Ants::breed(int x, int y) {

}

void Ants::move() {
    for(int x=0; x<_board.length; x++) {
        for(int y=0; y<_board[x].length;y++) {
            Organism org = _board[x][y];
                if(equals(org)) {
                    //code here
                    if(should_breed) {
                        breed(x, y);
                    }
                }
        }
    }
}
