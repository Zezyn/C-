//
// Created by Martin on 3/14/2016.
//

#ifndef C15_9_ANTS_H
#define C15_9_ANTS_H

#include "global.h"
#include "Organism.h"

class Ants : public Organism {
    public:
        inline Ants() : Organism(Organism &board[][], 'O');
        void breed(int, int);
        void move();
};


#endif //C15_9_ANTS_H
