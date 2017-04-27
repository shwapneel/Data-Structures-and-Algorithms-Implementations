#include<iostream>
using namespace std;

template<typename T>
//Nose Class / outlines what and how we are storing
class Node {

    public:
        //pointers / one points to the next node and one points to the previous node
        Node<T>* next;
        Node<T>* prev;

        //variable that stores the important value
        T data;

};

template<typename T>
//List class / outlines the basic functions we are using and front pointer
class list {
    private:
      
        Node<T>* head;
        Node<T>* tail;

    public:
     
        void insertion ( T new_data );

        void display ();

        void deletion ( T delete_data );    

        list ();

 };




template<typename T>
// list class constructor / sets the head of the list 
list<T>::list () {
    head = 0;
    tail = 0;
}

template<typename T>
// list class / inserts a new node into the list
void list<T>::insertion ( T new_data ) {

    //initializes a new node
    Node<T>* new_node = new Node<T>;
    new_node -> data = new_data; 
            
    //when the list is empty, assign the first node
    if ( head == 0  ) {
        head = new_node;
        tail = new_node;
        new_node -> prev = 0;
        new_node -> next = 0;
        return;
    }

    //sets up pointers traverse the linked list
    Node<T>* curr = head;


    //keep moving the pointer until we have the node we want or we have hit the end
    while ( curr != 0 && curr -> data < new_data) {
        curr = curr -> next;
    }


    if (curr == 0) {                            // insertion at the back
        tail -> next = new_node;
        new_node -> prev = tail;
        new_node -> next = 0;
        tail = new_node; 
    } else if (curr == head) {                  // insertion at the front
        new_node -> next = head;
        new_node -> prev = 0;
        curr -> prev = new_node;
        head = new_node;
    } else {                                    // insertion in the middle
        new_node -> prev = curr -> prev;
        new_node -> next = curr;
        (curr -> prev)-> next = new_node;
        curr -> prev = new_node;
    }
}

template<typename T>
//list class / outputs the linked list        
void list<T>::display() {

    //makes a pointer that outputs its data and increments until the end of the list
    Node<T>* display_point = head;
    while ( display_point != 0){
        cout << display_point -> data <<endl;
        display_point = display_point -> next;
    }
}


template<typename T>
//list class / deletes an entry
void list<T>::deletion ( T delete_data ) {
    Node<T>* delete_point_current = head;

    //edge case: when deleting the 1st element
    if ( delete_point_current -> data == delete_data ) {
        head = (delete_point_current) -> next;
        (delete_point_current -> next) -> prev = 0;
        delete delete_point_current;
        return ;
    }
    
    //goes through the entire list trying to find what it is trying to delete
    while ( delete_point_current != 0 && delete_point_current -> data != delete_data){
        delete_point_current = delete_point_current -> next;
    }

    //when it has found what it is trying to delete 
    //and its not beyond the end of the list
    //it will delete
    if (delete_point_current != 0 && delete_point_current != tail){      //deleting in the middle
        (delete_point_current -> prev) -> next = delete_point_current -> next;
        (delete_point_current -> next) -> prev = delete_point_current -> prev;
        delete delete_point_current;

    } else if ( delete_point_current != 0 ) {                             //deleting the last element 
        (delete_point_current -> prev) -> next = delete_point_current -> next;  
        tail = delete_point_current -> prev;
        delete delete_point_current;        
    }
}
