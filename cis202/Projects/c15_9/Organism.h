//
// Created by Martin on 3/17/2016.
//

#ifndef C15_9_ORGANISM_H
#define C15_9_ORGANISM_H

#include "global.h"

class Organism {
    protected: 
    Organism(*_board)[][];
    char _letter;
    public:
        Organism(char &board[][]);
        virtual void move();
        virtual void breed();
        virtual boolean equal(Organism);
};

#endif //C15_9_ORGANISM_H
