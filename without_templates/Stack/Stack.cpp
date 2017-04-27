#include<iostream>
#include"Stack.h"
using namespace std;

Stack::Stack () {
    head = 0;
}
 
void Stack::insert ( int insert_data ) {
    Stack* element = new Stack;
    element -> data = insert_data;

    if ( head == 0 ) {                        //if head is empty
        head = element;
        element -> next = 0;
        return;
    }

    element -> next = head;           //always inserting in front
    head = element;
}

void Stack::pop ( ) {
    Stack* curr = head;
 
    if ( curr == 0 ) {                        //if list is empty
        cout << " NO DATA " <<endl;
    } else {                                  //otherwise take top element
        head = head -> next;
        cout << "The number is: " << curr -> data <<endl;
        delete curr;
    }
}

void Stack::peep (  ) {
    
    if ( head != 0 && head -> next != 0 ) {   //takes 2nd element
        Stack* peep = head -> next;
        cout << "Next number in stack is: " << peep -> data <<endl;
    } else {
        cout << " NO DATA " <<endl;
    }
}

void Stack::display (  ) {
    Stack* display = head; 
    while ( display != 0 ) {
        cout << display -> data <<endl;
        display = display -> next;
    }    
}

