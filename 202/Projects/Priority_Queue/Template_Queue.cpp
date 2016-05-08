//
// Created by Martin on 4/30/2016.
//
#include "Template_Queue.h"
#include<iostream>
#include<cstdlib>

using namespace std;

Queue::Queue() : front(NULL), back(NULL) {}

Queue::Queue(const Queue& aQueue) {
    if(aQueue.empty()) { front = back = NULL; }
    else {
        QueueNodePtr temp_ptr_old = aQueue.front; // moves front to back of aQueue
        QueueNodePtr temp_ptr_new; //Used to create new nodes

        back = new QueueNode; //Makes new node
        back->data = temp_ptr_old->data; // add data to the back
        back->priority = temp_ptr_old->priority; //Adds priority
        back->link = NULL; //Sets the link to last in node
        front = back; //new nodes created after last
        temp_ptr_old = temp_ptr_old->link; //Sets to second node

        while(temp_ptr_old != NULL) { //While not empty
            temp_ptr_new = new QueueNode; //Adds node into temp
            temp_ptr_new->data = temp_ptr_old->data; //Adds in data
            temp_ptr_new->priority = temp_ptr_old->priority; //Add in priority
            temp_ptr_new->link = NULL; //makes last in queue
            back->link = temp_ptr_new; // puts the link into the back
            back = temp_ptr_new; // puts values into back of queue
            temp_ptr_old = temp_ptr_old->link; //puts the link into temp
        }
    }
}

Queue::~Queue() {
    std::string next;
    while(! empty()) { next = remove(); } //calls delete }
}

bool Queue::empty() const { return(back == NULL); } //Front

void Queue::add(std::string data, int priority) {
    if(empty()) {
        front = new QueueNode;
        front->data = data;
        front->priority = priority;
        front->link = NULL;
        back = front;
    }
    else {
        QueueNodePtr temp_ptr;
        temp_ptr = new QueueNode;
        temp_ptr->data = data;
        temp_ptr->priority = priority;
        temp_ptr->link = NULL;
        back->link = temp_ptr;
        back = temp_ptr;
    }
}

std::string Queue::remove() {
    if(empty()) { std::cout << "Error: Removing an item from an empty queue.\n"; exit(1); }
    QueueNodePtr discard;
    discard = front;
    front = front->link;
    if(front == NULL) { back = NULL; delete discard; }
}

/*
QueNodePtr Que::search(std::string find_data) {

    QueNodePtr here = front;
    if (front == NULL) return NULL;
    do {
        if(here->data == find_data) {
            here = here->link;
            return here;
        }
        else { return NULL; }
    } while(here->link != NULL);

}
 */

void Queue::print() {
     QueueNodePtr iter;
        for(iter = front; iter != NULL; iter = iter->link)
            { cout << endl << "Data: " << (iter->data) << " Priority: " << (iter->priority); }
}
