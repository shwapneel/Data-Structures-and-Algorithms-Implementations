#include<iostream>
using namespace std;

class Queue {
    private:
    
    Queue* head;
    Queue* tail;
    
    public:
 
    int data;
 
    Queue* next;

    Queue (  );
 
    void enqueue ( int enqueue_data );

    void dequeue (  );

    void display (  );

};
