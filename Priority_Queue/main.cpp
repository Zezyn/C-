#include <iostream>
#include<string>
#include"Template_Queue.h"

using namespace std;

int main(){
    string test = "A test string.";
    string test2 = "2nd Test";
    int priority = 1;
    int priority2 = 2;
    
    Queue q;
    q.add(test, priority);
    q.add(test2, priority2);
    q.print();
    return 0;
}
