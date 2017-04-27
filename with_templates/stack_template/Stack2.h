#include<iostream>
using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node<T>* next;
};

template<typename T>
class Stack {
    private:
    
    Node<T>* head;
    
    public:
 
    Stack (  );
 
    void insert ( T insert_data );

    void pop (  );

    void peep (  );

    void display (  );

};


template<typename T>
Stack<T>::Stack () {
    head = 0;
}
 
template<typename T>
void Stack<T>::insert ( T insert_data ) {
    Node<T>* element = new Node<T>;
    element -> data = insert_data;

    if ( head == 0 ) {                        //if head is empty
        head = element;
        element -> next = 0;
        return;
    }

    element -> next = head;                   //always inserting in front
    head = element;
}

template<typename T>
void Stack<T>::pop ( ) {
    Node<T>* curr = head;
 
    if ( curr == 0 ) {                        //if list is empty
        cout << " NO DATA " <<endl;
    } else {                                  //otherwise take top element
        head = head -> next;
        cout << "The number is: " << curr -> data <<endl;
        delete curr;
    }
}

template<typename T>
void Stack<T>::peep (  ) {
    
    if ( head != 0 && head -> next != 0 ) {   //takes 2nd element
        Node<T>* peep = head -> next;
        cout << "Next number in stack is: " << peep -> data <<endl;
    } else {
        cout << " NO DATA " <<endl;
    }
}

template<typename T>
void Stack<T>::display (  ) {
    Node<T>* display = head; 
    while ( display != 0 ) {
        cout << display -> data <<endl;
        display = display -> next;
    }    
}

