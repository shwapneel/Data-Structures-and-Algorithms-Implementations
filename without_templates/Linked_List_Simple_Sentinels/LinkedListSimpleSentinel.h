#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

class List {
    private:
        Node* head;
    public:
        List ();
 
        void insertion (int new_data);

        void display ();

        void deletion (int delete_data);
};

