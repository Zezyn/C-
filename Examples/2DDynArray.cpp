/*
    Filename: labslate.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 12/08/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

//Declare functions here
void create_array(int stations[], int** lab);
void print_array (int stations[], int** lab);
void login(int **labs);
void search(int **lab, int stations[]);
void logout(int **lab, int stations[]);
 
//Declare global variables here
const int COMPUTER_LABS = 4;

const int LAB1 = 5;
const int LAB2 = 6;
const int LAB3 = 4;
const int LAB4 = 3;


int main() {

    int stations[] =  { LAB1, LAB2, LAB3, LAB4 }; 
    int *lab[COMPUTER_LABS];


    create_array(stations, lab);
    login(lab);
    search(lab, stations);    
    print_array(stations, lab);
    logout(lab, stations);
    print_array(stations, lab);
    return 0;
}

//Insert user defined functions here
void create_array(int stations[], int** lab ) {

    for(int i = 0; i< COMPUTER_LABS; i++ )
        { lab[i] = new int[stations[i]];
        for(int j = 0; j < stations[i]; j++)
            { lab[i][j] = 0; }
    }
}

void print_array(int stations[], int** lab) {
    cout << endl;      
    for(int i = 0; i < COMPUTER_LABS; i++) {        
        cout << "Lab " << i + 1 << " : "; 
        for(int j=0; j<stations[i]; j++) { 
            //cout << lab[i][j];
            if(lab[i][j] == 0) {
                cout << "Empty | ";
            }
            else { cout << lab[i][j] << " | "; } 
        } 
        cout << endl;
    }
    cout << endl;
}

void login(int **lab) {
    int student_id;
    int lab_number;
    int station_number;
    
    cout << "Enter your 5 digit Student ID: ";
    cin >> student_id;
    cout << "Enter Lab Number: ";
    cin >> lab_number;
    cout << "Enter Computer Station: ";
    cin >> station_number;
    
    lab[lab_number - 1][station_number - 1] = student_id;
    
}

void search(int **lab, int stations[]) {

    int search_id;
    cout << "Please enter Student ID to search for: ";
    cin >> search_id;
    bool absent = true;

    for(int i=0; i < COMPUTER_LABS; i++) {
        for(int j=0; j < stations[i]; j++) {
            if(lab[i][j] == search_id) {
                cout << "Student is in lab: " << (i+1) << " at station " << (j+1) << endl;
                absent = false;
                break;      
             }
        }
    }
    if(absent) {
        cout << "Could not find user." << endl;
    }
}


void logout(int **lab, int stations[]) {

    int logout_id;
    cout << "Please enter Student ID to logout: ";
    cin >> logout_id;
    bool absent = true;

    for(int i=0; i < COMPUTER_LABS; i++) {
        for(int j=0; j < stations[i]; j++) {
            if(lab[i][j] == logout_id) {
                lab[i][j] = 0;
                absent = false;
                break;      
             }
        }
    }
    if(absent) {
        cout << "Could not find user." << endl;
    }
}
