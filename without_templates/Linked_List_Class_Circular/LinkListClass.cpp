#include<iostream>
#include"LinkListClass.h"
using namespace std;

// list class constructor / sets the head of the list 
list::list () {
    head = 0;
}

// list class / inserts a new node into the list
void list::insertion ( int new_data ) {

    //initializes a new node
    Node* new_node = new Node;
    new_node -> data = new_data; 
            
    //when the list is empty, assign the first node
    if ( head == 0  ) {
        head = new_node;
        new_node -> prev = head;
        new_node -> next = head;
        return;
    }

    //sets up pointers traverse the linked list
    Node* curr = head;

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

//list class / outputs the linked list        
void list::display() {

    //makes a pointer that outputs its data and increments until the end of the list
    Node* display_point = head;
    while ( display_point -> next != head){
        cout << display_point -> data <<endl;
        display_point = display_point -> next;
    }
    cout << display_point -> data <<endl;
}

//list class / deletes an entry
void list::deletion ( int delete_data ) {
    Node* delete_point_current = head;

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
