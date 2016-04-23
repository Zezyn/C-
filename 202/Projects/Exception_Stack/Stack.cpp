#include <iostream>
#include <cstddef>
#include "stack.h"

using namespace std;

Stack::Stack() : top(NULL){}

Stack::Stack(const Stack& a_stack) {
    if(a_stack.top == NULL) { top = NULL; }
    else {
        StackFramePtr temp = a_stack.top; //Temp moves through nodes
        StackFramePtr end; //End of stack

        //First node filled with data, new nodes after first
        end = new StackFrame;
        end->data = temp->data;
        top = end;

        temp - temp->link;
        while(temp != NULL) {
            end->link - new StackFrame;
            end = end->link;
            end->data = temp->data;
            temp = temp->link;
        }
        end->link = NULL;
    }
}

Stack::~Stack() {
    char next;
    while(! empty()) { next = pop(); } //Pop calls delete
}

bool Stack::empty() const { return (top == NULL); }

void Stack::push(char symbol) {
    StackFramePtr temp = new StackFrame;
    temp->data = symbol;
    temp->link = top;
    top = temp;
}

char Stack::pop() {

    if(empty()) { /*throw Error();*/} //THROWING EXCEPTION HERE 
                        
    char result = top->data;
    StackFramePtr tempPtr;
    tempPtr = top;
    top = top->link;

    delete tempPtr;

    return result;
}


