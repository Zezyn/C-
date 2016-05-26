/* Created by Martin Hernandez */

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
template <typename T> //Uses template **DOESNT WORK

class Sort {
    public:
        Sort(); //Construct array
        void sorting(); //Sorts array
        //void swap(int&, int&); //Swaps for sorting
        void swap(T &, T &); //Swaps for sorting using Template **DOESNT WORK
        void print_array(); //Prints array
    private:
//        int *dArray;
//        const int aSIZE = 10;
	
        T *dArray;
        const T aSIZE = 10;
};
#endif
