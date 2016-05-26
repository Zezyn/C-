/*
    Filename: inclass.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 02/18/2016
    Description: Vectors, iteration, and printing vectors
*/
//Add libraries here
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Declare functions here
void print_vector(std::ostream& o, std::vector<int>& v);
//Declare global variables here

int main() {
    std::ofstream out_file("data.txt");
    std::vector<int> grades;
    grades.push_back(20);
    grades.push_back(30);
    grades.push_back(4);
    grades.push_back(20);
//    print_vector(std::cout,grades);
    print_vector(out_file,grades);  
    return 0;
}

//Insert user defined functions here
void print_vector(std::ostream& o,std::vector<int>* v)
{
    //for(std::vector<int::iterator it = v.begin();it != v.end();it++)
        //o<<*it<<std::endl;

    //Alternate
    for(int i=0;i<v.size();i++)
        o<<v[i]<,std::endl;
}
