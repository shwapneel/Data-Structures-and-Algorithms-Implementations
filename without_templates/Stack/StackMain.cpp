#include<iostream>
#include"Stack.h"
using namespace std;

int main (  ) {
    Stack myStack;

    int repeat = 1;

    while (repeat == 1) {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << " What operation do you whant to do?" << endl;
        cout << " 1) insert " << endl;
        cout << " 2) pop " << endl;
        cout << " 3) peep " << endl;
        cout << " 4) display " << endl;
        cout << " 5) exit " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        int input = 0;
        cout << "input: ";
        cin >> input;
        
        if ( input == 1 ) {
 
            cout << endl;
            cout << "What number do you want to insert: ";
            int a = 0;
            cin >> a;
            
            myStack.insert (a);
            
        } else if ( input == 2 ) {
 
            myStack.pop ( );            
            
        } else if ( input == 3 ) {
             
            myStack.peep ( );            
            
        } else if ( input == 4 ) {
            
            myStack.display ( );            
            
        } else if ( input == 5 ) {

            repeat = 0;

        } else {

            cout << "INVALID ANSWER" <<endl;

        }

    }  
}
