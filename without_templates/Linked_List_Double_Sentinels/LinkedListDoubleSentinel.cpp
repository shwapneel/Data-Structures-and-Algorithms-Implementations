#include<iostream>
#include"LinkedListDoubleSentinel.h"
using namespace std;


List::List () {        //class constructor
    //sentinel nodes
    tail = new Node;
    head = new Node;
    head -> data = -5000000;
    head -> next = tail;
    head -> prev = 0;   
    tail -> data = -5000000;
    tail -> next = 0;
    tail -> prev = head;
}
 
void List::insertion (int new_data) {
            
    //node we are inserting
    Node* new_node = new Node;
    new_node -> data = new_data;

    //finding insertion point:
    Node* curr = head;
    while ( ( curr -> next ) -> next != 0 && ( curr -> next ) -> data < new_data){
        curr = curr -> next;
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
    while ( display->next != 0 ){
        cout << display -> data <<endl;
        display = display -> next;
    }
}

void List::deletion (int delete_data) {
    
    Node* curr = head -> next;
 
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

