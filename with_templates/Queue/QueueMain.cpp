#include<iostream>
#include"Queue.h"
using namespace std;

int main (  ) {
    Queue<int> myQueue;

    int repeat = 1;

    while (repeat == 1) {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << " What operation do you whant to do?" << endl;
        cout << " 1) enqueue to a int type queue" << endl;
        cout << " 2) dequeue " << endl;
        cout << " 3) display " << endl;
        cout << " 4) move on to a double type queue" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        int input = 0;
        cout << "input: ";
        cin >> input;
        
        if ( input == 1 ) {
 
            cout << endl;
            cout << "What number do you want to enqueue: ";
            int a = 0;
            cin >> a;
            
            myQueue.enqueue (a);
            
        } else if ( input == 2 ) {
 
            myQueue.dequeue ( );            
            
        } else if ( input == 3 ) {
             
            myQueue.display ( );            
            
        } else if ( input == 4 ) {

            repeat = 0;

        } else {

            cout << "INVALID ANSWER" <<endl;

        }

    }


    /////////////////////////////////////// double type queue ////////////////////////////

    Queue<double> myQueue2;

    int repeat2 = 1;

    while (repeat2 == 1) {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << " What operation do you whant to do?" << endl;
        cout << " 1) enqueue to a double type queue" << endl;
        cout << " 2) dequeue " << endl;
        cout << " 3) display " << endl;
        cout << " 4) move on to a character type queue" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        int input2 = 0;
        cout << "input: ";
        cin >> input2;
        
        if ( input2 == 1 ) {
 
            cout << endl;
            cout << "What number do you want to enqueue: ";
            double a2 = 0;
            cin >> a2;
            
            myQueue2.enqueue (a2);
            
        } else if ( input2 == 2 ) {
 
            myQueue2.dequeue ( );            
            
        } else if ( input2 == 3 ) {
             
            myQueue2.display ( );            
            
        } else if ( input2 == 4 ) {

            repeat2 = 0;

        } else {

            cout << "INVALID ANSWER" <<endl;

        }

    }  


    /////////////////////////////////////// char type queue ////////////////////////////

    Queue<char> myQueue3;

    int repeat3 = 1;

    while (repeat3 == 1) {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << " What operation do you whant to do?" << endl;
        cout << " 1) enqueue to a char type queue" << endl;
        cout << " 2) dequeue " << endl;
        cout << " 3) display " << endl;
        cout << " 4) exit the program" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        int input3 = 0;
        cout << "input: ";
        cin >> input3;
        
        if ( input3 == 1 ) {
 
            cout << endl;
            cout << "What number do you want to enqueue: ";
            char a3 = 0;
            cin >> a3;
            
            myQueue3.enqueue (a3);
            
        } else if ( input3 == 2 ) {
 
            myQueue3.dequeue ( );            
            
        } else if ( input3 == 3 ) {
             
            myQueue3.display ( );            
            
        } else if ( input3 == 4 ) {

            repeat3 = 0;

        } else {

            cout << "INVALID ANSWER" <<endl;

        }

    }      
  
}
