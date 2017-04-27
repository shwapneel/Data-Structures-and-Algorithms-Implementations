#include<iostream>
#include"LinkedListCircularSentinel.h"
using namespace std;


List::List () {        //class constructor
    //sentinel nodes
    head = new Node;
    head -> data = -5000000;
    head -> next = head;
    head -> prev = head;   
    }
 
void List::insertion (int new_data) {
            
    //node we are inserting
    Node* new_node = new Node;
    new_node -> data = new_data;

    //finding insertion point:
    Node* curr = head;

    //stops an infinite loop from happening
    int end_loop = 0;

    while ( end_loop == 0 && ( curr -> next ) -> data < new_data ) {
        curr = curr -> next;
        if ( curr -> next == head ){
            end_loop = 1;
        }
    }

    //inserting the node
    new_node -> prev = curr;
    new_node -> next = curr -> next;
    ( curr -> next ) -> prev =  new_node;
    curr -> next = new_node;
   
                        
}

void List::display () {
    Node* display = head -> next;
    //does not display the sentinals
    while ( display != head ){
        cout << display -> data <<endl;
        display = display -> next;
    }
}

void List::deletion (int delete_data) {
    
    Node* curr = head -> next;
 
    //loops from the 1st non sentinal node to the last non sentinal node
    while ( curr -> next != head && curr -> data != delete_data ){
         curr = curr -> next;
    }
   
    if ( curr -> data == delete_data ){
        ( curr -> prev ) -> next = curr -> next;
        ( curr -> next ) -> prev = curr -> prev;
        delete curr;               
    }
}

