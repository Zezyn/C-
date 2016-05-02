/* Created by Martin Hernandez */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

class Sort {
    public:
        Sort(); //Construct array
        void sorting(); //Sorts array
        void swap(int&, int&); //Swaps for sorting
        void print_array(); //Prints array
    private:
        int *dArray;
        const int aSIZE = 10;
};
#endif