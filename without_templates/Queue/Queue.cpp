#include<iostream>
#include"Queue.h"
using namespace std;

Queue::Queue () {
    head = 0;
    tail = 0;
}
 
void Queue::enqueue ( int enqueue_data ) {
    Queue* element = new Queue;
    element -> data = enqueue_data;

    if ( head == 0 ) {                        //if head is empty
        head = element;
        tail = element;
        element -> next = 0;
        return;
    }

    element -> next = 0;           //always inserting in back
    tail -> next = element;
    tail = element;
}

void Queue::dequeue ( ) {
    Queue* curr = head;
    if ( curr == 0 ) {                        //if list is empty
        cout << " NO DATA " <<endl;
    } else {                                  //otherwise take top element
        head = head -> next;
        cout << "The number is: " << curr -> data <<endl;
        delete curr;
    }
}

void Queue::display (  ) {
    Queue* display = head; 
    while ( display != 0 ) {
        cout << display -> data <<endl;
        display = display -> next;
    }    
}

