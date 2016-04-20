#include <iostream>
#include <cstddef>
#include <cstdlib>
#include "stack.h"
#include <stdlib.h> /* atoi */
using namespace std;

namespace stacksavitch
{
    //Uses cstddef:
    Stack::Stack( ) : top(NULL)
    {
        //Body intentionally empty.
    }

    Stack::Stack(const Stack& a_stack) {
        if(a_stack.top == NULL) {
            top = NULL;
        }
        else {
            StackFramePtr temp = a_stack.top; //Temp moves through the nodes from top to bottom
            StackFramePtr end; //Points to end of stack

            end = new StackFrame;
            end->data = temp->data;
            top = end;
            //First node created and filled with data. New nodes are now added AFTER the first node.

            temp = temp->link;
            while(temp != NULL) {
                end->link = new StackFrame;
                end = end->link;
                end->data = temp->data;
                temp = temp->link;
            }
            end->link = NULL;
        }
}

    Stack::~Stack( )
    {
        char next;
        while (! empty( ))
            next = pop( );//pop calls delete.
    }


    //Uses cstddef:
    bool Stack::empty( ) const
    {
        return (top == NULL);
    }


    void Stack::push(char the_symbol)
    {
        StackFramePtr temp = new StackFrame;
        temp->data = the_symbol;
        temp->link = top;
        top = temp;
    }
    
    //Uses iostream:
    int Stack::pop( ) //DO MATH HERE!
    {
        if (empty( ))
        {
            cout << "Error: popping an empty stack.\n";

            exit(1);
        }

        char result = top->data;
        int number = result - '0';
        StackFramePtr temp_ptr;
        temp_ptr = top;
        top = top->link;

        delete temp_ptr;

        return number;
    }
}//stacksavitch

