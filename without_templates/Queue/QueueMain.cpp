#include<iostream>
#include"Queue.h"
using namespace std;

int main (  ) {
    Queue myQueue;

    int repeat = 1;

    while (repeat == 1) {

        cout << endl;
        cout << endl;
        cout << endl;
        cout << " What operation do you whant to do?" << endl;
        cout << " 1) enqueue " << endl;
        cout << " 2) dequeue " << endl;
        cout << " 3) display " << endl;
        cout << " 4) exit " << endl;
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
}
