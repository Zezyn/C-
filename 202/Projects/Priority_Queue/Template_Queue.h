//
// Created by Martin on 4/30/2016.
//

#ifndef TEMPLATE_QUEUE_H
#define TEMPLATE_QUEUE_H
#include<string>

//template<class T> //Adding a template
struct QueueNode {
    std::string data;
    int priority;
    QueueNode *link;
};
typedef QueueNode* QueueNodePtr;

class Queue {
public:
    Queue(); ///Intializes to empty
    Queue(const Queue& aQueue); //Builds Queue
    ~Queue();
    bool empty() const; //Returns true if empty
    void add(std::string data, int priority); //Add to queue
    std::string remove(); //Removes data from the queue
    void print();
private:
    QueueNodePtr front; //Points to the head of a linked list
    QueueNodePtr back; //Points to the tail items added at this end
};

#endif //TEMPLATE_QUEUE_H
