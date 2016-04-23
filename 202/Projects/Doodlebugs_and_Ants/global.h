//
// Created by martine hernandez on 3/22/16.
//

#ifndef C15_9_GLOBAL_H
#define C15_9_GLOBAL_H

const int ROWS = 20;            //# of Rows
const int COLS = 20;            //# of Cols
const int ANTS = 100;           //# of starting ants
const int DOODLEBUGS = 5;       //# of starting doodlebugs
const int ANT_BREED = 3;        //# of turns before an ant breeds
const int DOODLEBUG_BREED = 8;  //# of turns before a doodlebug breeds
const int DOODLE_STARVE = 3;    //# of turns before a doodlebug dies if it don't eat

const char DOODLEBUG = 'X';     //Char of single doodlebug
const char ANT = 'O';           //Char of single ant

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

#endif //C15_9_GLOBAL_H
