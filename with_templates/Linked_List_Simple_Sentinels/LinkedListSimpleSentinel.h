#include<iostream>
using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node<T>* next;
};

template<typename T>
class List {
    private:
        Node<T>* head;
    public:
        List ();
 
        void insertion ( T new_data);

        void display ();

        void deletion ( T delete_data);
};

template<typename T>
List<T>::List () {        //class constructor
    head = new Node<T>;
    head -> data = 0;
    head -> next = 0;  
}

template<typename T> 
void List<T>::insertion (T new_data) {
            
    //node we are inserting
    Node<T>* new_node = new Node<T>;
    new_node -> data = new_data;

    //finding insertion point:
    Node<T>* curr = head -> next;
    Node<T>* prev = head;
    while ( curr != 0 && curr -> data < new_data){
        prev = curr;
        curr = curr -> next;
    }

    //inserting the node
    prev -> next = new_node;
    new_node -> next = curr;
                        
}

template<typename T>
void List<T>::display () {
    Node<T>* display = head -> next;
    while ( display != 0 ){
        cout << display -> data <<endl;
        display = display -> next;
    }
}

template<typename T>
void List<T>::deletion (T delete_data) {
    Node<T>* curr = head -> next;
    Node<T>* prev = head;
 
    while ( curr != 0 && curr -> data != delete_data ){
         prev = curr;
         curr = curr -> next;
    }
   
    if ( curr -> data == delete_data ){
        prev -> next = curr -> next;
        delete curr;               
    }
}

