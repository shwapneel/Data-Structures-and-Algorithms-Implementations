#include<iostream>
using namespace std;

class Stack {
    private:
    
    Stack* head;
    
    public:
 
    int data;
 
    Stack* next;

    Stack (  );
 
    void insert ( int insert_data );

    void pop (  );

    void peep (  );

    void display (  );

};
