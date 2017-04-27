#include<iostream>
using namespace std;

//Nose Class / outlines what and how we are storing
class Node {

    public:
        //pointer that will point to other nodes
        Node* pointer;

        //variable that stores the important value
        int data;
};

//List class / outlines the basic functions we are using and front pointer
class list {
    public:
     
        void insertion ( int new_data );

        void display ();

        void deletion ( int delete_data );    

        list ();
    private:
      
        Node* front;


 };
