#include<iostream>
#include"LinkedListSimpleSentinel.h"
using namespace std;


List::List () {        //class constructor
    head = new Node;
    head -> data = -5000000;
    head -> next = 0;  
}
 
void List::insertion (int new_data) {
            
    //node we are inserting
    Node* new_node = new Node;
    new_node -> data = new_data;

    //finding insertion point:
    Node* curr = head -> next;
    Node* prev = head;
    while ( curr != 0 && curr -> data < new_data){
        prev = curr;
        curr = curr -> next;
    }

    //inserting the node
    prev -> next = new_node;
    new_node -> next = curr;
                        
}

void List::display () {
    Node* display = head -> next;
    while ( display != 0 ){
        cout << display -> data <<endl;
        display = display -> next;
    }
}

void List::deletion (int delete_data) {
    Node* curr = head -> next;
    Node* prev = head;
 
    while ( curr != 0 && curr -> data != delete_data ){
         prev = curr;
         curr = curr -> next;
    }
   
    if ( curr -> data == delete_data ){
        prev -> next = curr -> next;
        delete curr;               
    }
}

