#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
};

class List {
    private:
        Node* head;
        Node* tail;
    public:
        List ();
 
        void insertion (int new_data);

        void display ();

        void deletion (int delete_data);
};

