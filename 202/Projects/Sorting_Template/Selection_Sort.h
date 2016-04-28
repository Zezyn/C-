/* Created by Martin Hernandez */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

class Sort {
    public:
        Sort();
        void sorting();
        void swap(int&, int&);
        void print_array();
    private:
        int *dArray;
};
#endif
