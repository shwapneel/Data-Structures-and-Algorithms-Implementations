#include<iostream>
#include "LinkListClass.h"
using namespace std;

// list class constructor / sets the head of the list 
list::list () {
    front = 0;
}
 
// list class / inserts a new node into the list
void list::insertion ( int new_data ) {

    //initializes a new node
    Node* new_node = new Node;
    new_node -> data = new_data; 
            
    //when the list is empty, assign the first node
    if (front == 0) {
        new_node -> pointer = 0;
        front = new_node;
        return;
    }

    //sets up pointers traverse the linked list
    Node* curr = front;
    Node* prev = 0;


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

//list class / outputs the linked list        
void list::display() {

    //makes a pointer that outputs its data and increments until the end of the list
    Node* display_point = front;
    while ( display_point != 0){
        cout << display_point -> data <<endl;
        display_point = display_point -> pointer;
    }
}


//list class / deletes an entry
void list::deletion ( int delete_data ) {
    Node* delete_point_prev = 0;
    Node* delete_point_current = front;

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

