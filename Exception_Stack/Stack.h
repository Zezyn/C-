#ifndef STACK_H
#define STACK_H

struct StackFrame {
    char data;
    StackFrame *link;
};

typedef StackFrame *StackFramePtr;

class Stack {
    public:
        Stack(); //Initializes empty stack
        Stack(const Stack& a_stack); //Copy Constructor
        ~Stack(); //Destroy stack and return memory
        void push(char the_symbol); //Add to stack
        char pop(); //Pop off stack
        bool empty() const; //True is stack is empty
    private:
        StackFramePtr top;
};
#endif
