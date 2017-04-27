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
        new_node -> prev = head;
        new_node -> next = head;
        return;
    }

    //sets up pointers traverse the linked list
    Node<T>* curr = head;

    //stops an infinite loop
    int end_loop = 0;

    //keep moving the pointer until we have the node we want or we have hit the end
    while ( curr -> data < new_data && end_loop == 0) {
        curr = curr -> next;
        if (curr -> next == head  && curr -> data < new_data ){
            end_loop = 100;
        }
    }

    if (end_loop == 100) {                            // insertion at the back
        new_node -> prev = curr;
        curr -> next = new_node;
        new_node -> next = head;
        head -> prev = new_node;
    } else if (curr == head) {                  // insertion at the front
        new_node -> prev = curr -> prev;
        new_node -> next = curr;
        curr -> prev = new_node;
        head = new_node;
        (new_node -> prev) -> next = head;
    } else {                                    // insertion in the middle
        new_node -> prev = curr -> prev;
        (curr -> prev) -> next = new_node;
        new_node -> next = curr;
        curr -> prev = new_node;
    }
}

template<typename T>
//list class / outputs the linked list        
void list<T>::display() {

    //makes a pointer that outputs its data and increments until the end of the list
    Node<T>* display_point = head;
    while ( display_point -> next != head){
        cout << display_point -> data <<endl;
        display_point = display_point -> next;
    }
    cout << display_point -> data <<endl;
}

template<typename T>
//list class / deletes an entry
void list<T>::deletion ( T delete_data ) {
    Node<T>* delete_point_current = head;

    //edge case: when deleting the 1st element
    if ( delete_point_current -> data == delete_data ) {
        (delete_point_current -> next) -> prev = (delete_point_current) -> prev;
        (delete_point_current -> prev) -> next = (delete_point_current) -> next;        
        head = (delete_point_current) -> next;
        delete delete_point_current;
        return ;
    }
    
    //will prevent an infinite loop
    int end_loop = 0;

    //goes through the entire list trying to find what it is trying to delete
    while ( delete_point_current -> data != delete_data && end_loop == 0 ){
        delete_point_current = delete_point_current -> next;
        if (delete_point_current == head) {
             end_loop = 100;
        }
    }

    //when it has found what it is trying to delete 
    (delete_point_current -> prev) -> next = delete_point_current -> next;
    (delete_point_current -> next) -> prev = delete_point_current -> prev;
    delete delete_point_current;

}
