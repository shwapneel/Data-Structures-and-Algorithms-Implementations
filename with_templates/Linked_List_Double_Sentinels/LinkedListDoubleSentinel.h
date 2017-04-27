#include<iostream>
using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node<T>* next;
    Node<T>* prev;
};

template<typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
    public:
        List ();
 
        void insertion (T new_data);

        void display ();

        void deletion (T delete_data);
};


template<typename T>
List<T>::List () {        //class constructor
    //sentinel nodes
    tail = new Node<T>;
    head = new Node<T>;
    head -> data = 0;
    head -> next = tail;
    head -> prev = 0;   
    tail -> data = 0;
    tail -> next = 0;
    tail -> prev = head;
}

template<typename T> 
void List<T>::insertion (T new_data) {
            
    //node we are inserting
    Node<T>* new_node = new Node<T>;
    new_node -> data = new_data;

    //finding insertion point:
    Node<T>* curr = head;
    while ( ( curr -> next ) -> next != 0 && ( curr -> next ) -> data < new_data){
        curr = curr -> next;
    }

    //inserting the node
    new_node -> prev = curr;
    new_node -> next = curr -> next;
    ( curr -> next ) -> prev =  new_node;
    curr -> next = new_node;
   
                        
}

template<typename T>
void List<T>::display () {
    Node<T>* display = head -> next;
    //does not display the sentinals
    while ( display->next != 0 ){
        cout << display -> data <<endl;
        display = display -> next;
    }
}

template<typename T>
void List<T>::deletion (T delete_data) {
    
    Node<T>* curr = head -> next;
 
    //loops from the 1st non sentinal node to the last non sentinal node
    while ( (curr -> next) -> next != 0 && curr -> data != delete_data ){
         curr = curr -> next;
    }
   
    if ( curr -> data == delete_data ){
        ( curr -> prev ) -> next = curr -> next;
        ( curr -> next ) -> prev = curr -> prev;
        delete curr;               
    }
}

