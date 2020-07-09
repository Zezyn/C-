//
// Created by Martin on 3/14/2016.
//

#ifndef C15_9_DOODLEBUGS_H
#define C15_9_DOODLEBUGS_H

#include "global.h"
#include "board.h"
#include "Organism.h"

class Doodlebugs : public Organism {

    public:
        Doodlebugs();
        void move();
        void breed();
        void starve();
        char doodlebug = DOODLEBUG;
        std::vector<char> doodlebugs;
    private:
        std::vector<int> doodlebugs_x;
        std::vector<int> doodlebugs_y;
};

#endif //C15_9_DOODLEBUGS_H
