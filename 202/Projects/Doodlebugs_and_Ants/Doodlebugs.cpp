//
// Created by Martin on 3/14/2016.
//

#include "Doodlebugs.h"

Doodlebugs::Doodlebugs() {
    for(int i=0; i<DOODLEBUGS; i++) {
        doodlebugs.push_back('X');
        int ant_x = rand() % ROWS;
        int ant_y = rand() % COLS;
        doodlebugs_x.push_back(ant_x);
        doodlebugs_y.push_back(ant_y);
    }
}

void Doodlebugs::move() {

}

void Doodlebugs::breed() {

}

void Doodlebugs::starve() {

}
