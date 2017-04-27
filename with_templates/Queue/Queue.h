#include<iostream>
using namespace std;


template<typename T>
class Node {
    public:
    T data;
    Node<T>* next;
};


template<typename T>
class Queue {
    private:
    
    Node<T>* head;
    Node<T>* tail;
    
    public:

    Queue (  );
 
    void enqueue ( T enqueue_data );

    void dequeue (  );

    void display (  );

};

template <typename T>
Queue<T>::Queue () {
    head = 0;
    tail = 0;
}
 
template <typename T>
void Queue<T>::enqueue ( T enqueue_data ) {
    Node<T>* element = new Node<T>;
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

template <typename T>
void Queue<T>::dequeue ( ) {
    Node<T>* curr = head;
    if ( curr == 0 ) {                        //if list is empty
        cout << " NO DATA " <<endl;
    } else {                                  //otherwise take top element
        head = head -> next;
        cout << "The data is: " << curr -> data <<endl;
        delete curr;
    }
}

template <typename T>
void Queue<T>::display (  ) {
    Node<T>* display = head; 
    while ( display != 0 ) {
        cout << display -> data <<endl;
        display = display -> next;
    }    
}

