#include<iostream>
using namespace std;

template<typename T>
//Nose Class / outlines what and how we are storing
class Node {

    public:
        //pointer that will point to other nodes
        Node<T>* pointer;

        //variable that stores the important value
        T data;
};

template<typename T>
//List class / outlines the basic functions we are using and front pointer
class list {
    public:
     
        void insertion ( int new_data );

        void display ();

        void deletion ( int delete_data );    

        list ();
    private:
      
        Node<T>* front;


 };

template<typename T>
// list class constructor / sets the head of the list 
list<T>::list () {
    front = 0;
}


template<typename T> 
// list class / inserts a new node into the list
void list<T>::insertion ( int new_data ) {

    //initializes a new node
    Node<T>* new_node = new Node<T>;
    new_node -> data = new_data; 
            
    //when the list is empty, assign the first node
    if (front == 0) {
        new_node -> pointer = 0;
        front = new_node;
        return;
    }

    //sets up pointers traverse the linked list
    Node<T>* curr = front;
    Node<T>* prev = 0;


    //keep moving the 2 pointers until we have the node we want or we have hit the end
    while ( curr != 0 && curr->data < new_data) {
        prev = curr;
        curr = curr -> pointer;
    }


    if (curr == 0) {                            // insertion at the back
        prev -> pointer = new_node;
        new_node -> pointer = 0;  
    } else if (prev == 0) {                     // insertion at the front
       front = new_node;
       new_node -> pointer = curr;
    } else {                                    // insertion in the middle
       prev -> pointer = new_node;
       new_node -> pointer = curr;
    }
}


template<typename T>
//list class / outputs the linked list        
void list<T>::display() {

    //makes a pointer that outputs its data and increments until the end of the list
    Node<T>* display_point = front;
    while ( display_point != 0){
        cout << display_point -> data <<endl;
        display_point = display_point -> pointer;
    }
}


template<typename T>
//list class / deletes an entry
void list<T>::deletion ( int delete_data ) {
    Node<T>* delete_point_prev = 0;
    Node<T>* delete_point_current = front;

    //edge case: when deleting the 1st element
    if ( delete_point_current -> data == delete_data ) {
        front = (delete_point_current) -> pointer;
        delete delete_point_current;
        return ;
    }

    
    //goes through the entire list trying to find what it is trying to delete
    while ( delete_point_current != 0 && delete_point_current -> data != delete_data){
        delete_point_prev = delete_point_current;
        delete_point_current = delete_point_current -> pointer;
    }

    //when it has found what it is trying to delete 
    //and its not beyond the end of the list
    //it will delete
    if (delete_point_current != 0){
        delete_point_prev -> pointer = (delete_point_current) -> pointer;
        delete delete_point_current;
    }
}

