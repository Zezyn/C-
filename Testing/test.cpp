//Libraries
#include <iostream> 
#include <string>

using namespace std;

//Function Declarations
void arraysize();
//void arraysize(string &id, int &lab, int &cstation, string *labs, int labsize);
//void fillarrays(string &id, int &lab, int &cstation, string **labs, int labsize);
//void printarrays(string &id, int &lab, int &cstation, string **labs, int labsize);
//void removearrays(string *labs);

//Global Variables
const int TOTAL_LABS = 4;
const int TOTAL_STATIONS = 6;
const int LAB1 = 5;
const int LAB2 = 6;
const int LAB3 = 4;
const int LAB4 = 3;

int main() {
	string id = "12334"; //Numbers are for testing
    int cstation = 3;
    int lab = 1;
    //string *labs[TOTAL_LABS];
	//int labsize[TOTAL_LABS] = { LAB1,LAB2,LAB3,LAB4 };
    //int labsize[TOTAL_LABS];
	arraysize();
	//arraysize(id, cstation, lab, *labs, **labsize);
    //fillarrays(id, cstation, lab, labs);
    //menu(id, cstation, lab, labs);
    //printarrays(id, cstation, lab, labs, labsize);
    //removearrays(*labs);
	return 0;
}

/*//User Defined Functions
void removearrays(string *labs) {
	for (int i = 0; i < TOTAL_LABS; i++)
		{ delete [] labs[i]; }
	delete [] labs;
}*/

//void arraysize(string &id, int &lab, int &cstation, string *labs, int labsize) {
void arraysize() {
	int labsize[TOTAL_LABS];
	int **stations;
    
    labsize[TOTAL_LABS] = { LAB1,LAB2,LAB3,LAB4 };
	stations = new int [TOTAL_LABS];
	
    for(int i=0; i< TOTAL_LABS; i++)
		{ stations[i] = new int [labsize[i]]; }
	
	
	//labs[0] = labsize[0];
	//labs[1] = labsize[1];
	//labs[2] = labsize[2];
	//labs[3] = labsize[3];

	//fillarrays(id, lab, labs, cstation, labsize);
}

/*
void fillarrays(string &id, int &lab, int &cstation, string **labs, int labsize) {

    for(int row = 0; row<TOTAL_LABS;row ++) {
        for(int col=0; col<TOTAL_LABS; col++) {
            labs[row] = "Empty";
        }
    }   
}

void printarrays(string &id, int &lab, int &cstation, string **labs, int labsize) {
        
    cout << "\nLabs#" << "  " << "Computer Stations" << endl;;
    for(int rows=0 ;rows<TOTAL_LABS; rows++) {
        cout << " " << (rows+1) << ":    ";
        for(int cols=0; cols<TOTAL_LABS; cols++) {
            cout << (cols+1) << ": ";
            cout << labs[rows] << "     ";
        }   
    cout << endl;
    }
    //menu(id, cstation, lab, labs);
}*/

