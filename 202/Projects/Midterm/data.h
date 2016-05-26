#ifndef DATA_H
#define DATA_H
#include <string>
/*
    Filename: data.h
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 04/05/2016
    Description: Header File for data
*/
namespace dataque {
    struct QueNode {
        std::string name;
        std::string address;
        QueNode *link;
    };
    typedef QueNode* QueNodePtr;

    class Que {
    public:
        Que(); //Initializes to empty
        Que(const Que& aQue);
        ~Que();
        void add(std::string name, std::string address); //Add item to back of que
        std::string remove(); //The que is not empty/returns item to front and removes
        bool empty() const; //Returns true if empty
        QueNodePtr search(std::string find_name);
        void menu(Que& q);
    private:
        QueNodePtr front; //Points to the head of a linked list/Items are removed at the head
        QueNodePtr back; //Points to the tail items added at this end
    };
}//End of namespace
#endif //DATA_H
