#include <iostream>
#include <cstdlib>
#include <cstddef>
#include "data.h"
#include <string>
#include <fstream>

using namespace std;

namespace dataque {

    Que::Que() : front(NULL), back(NULL) {}

    Que::Que(const Que& aQue) {
        if(aQue.empty())
            front = back = NULL;
        else {
            QueNodePtr temp_ptr_old = aQue.front; //temp_ptr_old moves front to back of aQue
            QueNodePtr temp_ptr_new; //temp_ptr_new is used to create new nodes

            back = new QueNode;
            back->name = temp_ptr_old->name;
            back->address = temp_ptr_old->address;
            back->link = NULL;
            front = back; //First node created and filled with data
                        //New nodes are entered AFTER this one
            temp_ptr_old = temp_ptr_old->link; //tempptrold now points to second node
        
            while(temp_ptr_old != NULL) {
                temp_ptr_new = new QueNode;
                temp_ptr_new->name = temp_ptr_old->name;
                temp_ptr_new->address = temp_ptr_old->address;
                temp_ptr_new->link = NULL;
                back->link = temp_ptr_new;
                back = temp_ptr_new;
                temp_ptr_old = temp_ptr_old->link;
            }
        }
    }

        Que::~Que() {
            std::string next;
            while(! empty())
                next=remove(); // removes calls delete
        }
        
        bool Que::empty() const {
            return(back == NULL); //Front ==NULL would also work
        }

        void Que::add(std::string name, std::string address) {
            if(empty()) {
                front = new QueNode;
                front->name = name;
                front->address = address;
                front->link = NULL;
                back = front;
            }
            else {
                QueNodePtr temp_ptr;
                temp_ptr = new QueNode;
                temp_ptr->name = name;
                temp_ptr->address = address;
                temp_ptr->link = NULL;
                back->link = temp_ptr;
                back = temp_ptr;
            } 
        }
            string Que::remove() {
                if(empty()) {
                    cout << "Error: Removing an item from an empty queue.\n";
                    exit(1);
                }
                QueNodePtr discard;
                discard = front;
                front = front->link;
                if(front == NULL) // if you removed the last node
                    back = NULL;

                delete discard;
            }
            
            QueNodePtr Que::search(std::string find_name) {
                
                QueNodePtr here = front;
                if (front == NULL) return NULL;
                do { 
                    if(here->name == find_name) {
                        here = here->link;
                        return here;
                    }
                    else { return NULL; }
                } while(here->link != NULL);
            }

        void Que::menu(Que& q) {
            int option;
        
                cout << "\n((Please Choose an option))" << endl;
                cout << "1. Input from file" << endl;
                cout << "2. Input from keyboard" << endl;
                cout << "3. Search for a name and edit" << endl;
                cout << "4. Print all and Exit" << endl;
                cout << "\nYour choice: ";
                cin >> option;
        
            if(option == 1) { 
                string file;
                string f_name;
                string f_address;
                
                cout << "Enter the file name: ";
                cin >> file;
                
                ifstream ff;
                ff.open(file.c_str());

                if(ff.fail()) { cout << "File failed" << endl; exit(1); }

                while(! ff.eof()) {
                   getline(ff, f_name);
                    cout << f_name << endl;
                    getline(ff, f_address);
                    cout << f_address << endl;
                    
                    if(empty()) {
                        front = new QueNode;
                        front->name = f_name;
                        front->address = f_address;
                        front->link = NULL;
                        back = front;
                    }
                    else {
                        QueNodePtr temp_ptr;
                        temp_ptr = new QueNode;
                        temp_ptr->name = f_name;
                        temp_ptr->address = f_address;
                        temp_ptr->link = NULL;
                        back->link = temp_ptr;
                        back = temp_ptr;
                    }
                }
                ff.close();
            }
            else if(option == 2) { 
                std::string name;
                std::string address;
                std::string ans; 
       
                 cout << "Enter a name: ";
                 cin.ignore(10000, '\n');
                 getline(cin, name);
                 cout << "Enter an address(ex: 1234 Sprite Lane Victorville, CA 92392): ";
                 getline(cin, address);
                 q.add(name, address);
                
                menu(q);
            }
            else if(option == 3) { 
                
                std::string search_name;
                
                cout << "Enter the name to search for: ";
                //getline(cin, search_name); //Can't getline to work
                cin >> search_name;

                QueNodePtr temp;
                temp = q.search(search_name);
                
                if (temp != NULL) {
                    cout << temp->name << endl;
                    cout << temp->address << endl;
                
                char edit;
                cout << "Would you like to edit the entry? ";
                cin >> edit;
                
                std::string temp_name;
                std::string temp_address;
                
                    if(edit == 'y' || edit == 'Y') { 
                        q.remove();
                        cout << "Enter new name: ";
                        cin >> temp_name;
                        cout << "Enter new address: ";
                        cin >> temp_address;
                        q.add(temp_name, temp_address);
                    }
                } 
                else {
                    cout << "No Results Found" << endl;
                }    
                menu(q);
            }
            else if(option == 4) { 
            
                QueNodePtr iter;
                
                for(iter = front; iter != NULL; iter = iter->link)
                   { cout << endl << (iter->name) << endl << (iter->address); }
            
                exit(1);
            }
        }
}
