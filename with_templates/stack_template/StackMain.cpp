#include<iostream>
#include"Stack2.h"
using namespace std;

void menu ( int type ) {
    if ( type == 1 ) {               // if int
        Stack<int> myStack;

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
    } else if ( type == 2) {                      //if double
        Stack<double> myStack2;

        int repeat2 = 1;

        while (repeat2 == 1) {

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
            int input2 = 0;
            cout << "input: ";
            cin >> input2;
        
            if ( input2 == 1 ) {
 
                cout << endl;
                cout << "What number do you want to insert: ";
                double a2 = 0;
                cin >> a2;
            
                myStack2.insert (a2);
            
           } else if ( input2 == 2 ) {
 
                myStack2.pop ( );            
            
           } else if ( input2 == 3 ) {
             
                myStack2.peep ( );            
             
           } else if ( input2 == 4 ) {
            
                myStack2.display ( );            
            
           } else if ( input2 == 5 ) {

                repeat2 = 0;

           } else {

               cout << "INVALID ANSWER" <<endl;

           }

       }
    } else if ( type == 3 ) {                     //if character
        Stack<char> myStack3;

        int repeat3 = 1;

        while (repeat3 == 1) {

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
            int input3 = 0;
            cout << "input: ";
            cin >> input3;
        
            if ( input3 == 1 ) {
 
                cout << endl;
                cout << "What number do you want to insert: ";
                char a3 = 0;
                cin >> a3;
            
                myStack3.insert (a3);
            
           } else if ( input3 == 2 ) {
 
                myStack3.pop ( );            
            
           } else if ( input3 == 3 ) {
             
                myStack3.peep ( );            
             
           } else if ( input3 == 4 ) {
            
                myStack3.display ( );            
            
           } else if ( input3 == 5 ) {

                repeat3 = 0;

           } else {

               cout << "INVALID ANSWER" <<endl;

           }

       }
    } else {

        cout << "INVALID ANSWER" <<endl;

        
    }
}

int main (  ) {
    cout << " if you want an int stack, press 1\n if you want a double type stack, press 2\n if you want a char typr stack, press 3" <<endl;
    int menu_input = 0;
    cin >> menu_input;
    menu (menu_input);
}
