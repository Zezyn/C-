/*
    Filename: final.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 12/10/2015
    Description: 
*/
//Add libraries here
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>

using namespace std;

struct Info {

    int word_count;
    int line_count;
    string word;    

};

void read_file(string name, string filename);

int main() {
    
    read_file();
    return 0;
}

void read_file() { //Pulls input from file and formats
    
    ifstream infile;

    char C;
    
    infile.open("alice.txt"); 

    if(infile.fail()) {
        cout << "File does not exist" << endl; 
        exit(1);
    }
    while (infile.get(C)) {
        if(ispnct(C)) 
            { C.erase(); }
        if(C=='\b') 
            {   }
    }
    infile.close();
}

void count(Info.word) {

}
