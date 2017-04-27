#include<iostream>
using namespace std;

//Nose Class / outlines what and how we are storing
class Node {

    public:
        //pointers / one points to the next node and one points to the previous node
        Node* next;
        Node* prev;

        //variable that stores the important value
        int data;

};

//List class / outlines the basic functions we are using and front pointer
class list {
    private:
      
        Node* head;
        Node* tail;

    public:
     
        void insertion ( int new_data );

        void display ();

        void deletion ( int delete_data );    

        list ();

 };
