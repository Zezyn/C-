/*
    Filename: structemployeerecord.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/24/2015
    Description: 
*/
//Add libraries here
#include <iostream>

using namespace std;

class Student {

    private:
        int id;
        string name;
        char grade;
    public:
        void setId(int _id){ id = _id; };
        int getId(){ return id;};
};

int main() {

    Student s;
    s.setId(1);
    cout << "Student ID: " << s.getId() << endl;

    return 0;
}


