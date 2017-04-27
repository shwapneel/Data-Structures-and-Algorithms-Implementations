#include<iostream>
#include"LinkedListCircularSentinel.h"
using namespace std;

int main () {
    int y = 9;

    List mylist;

    while ( y == 9 ) {                                           //loops the program

        //the menu
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "which operation would you like to do" <<endl;
        cout << "1) insertion" <<endl;
        cout << "2) display" <<endl;
        cout << "3) deletion" <<endl;
        cout << "4) exit" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;

        //user command
        int x = 2;

        //actual menu functions being implemented using the list class
        cout << "Your input: "; 
        cin >> x;

        if ( x == 1 ) {                                               //insertion
           int z = 0;
           cout << "What number do you want to insert?" <<endl; 
           cin >> z;

           mylist.insertion(z);

        } else if ( x == 2 ) {                                        //display

           
           cout << endl;
           cout << endl;
           mylist.display();
           cout << endl;
           cout << endl;    

        } else if ( x == 3 ) {                                       //deletion
           int w = 0;
           cout << "What number do you want to delete?" <<endl; 
           cin >> w;
           
           mylist.deletion(w);

        } else if ( x == 4 ){                                        //exit the loop
             y = 1000;
        } else {
             cout << "INVALID ANSWER" <<endl;
        }
    } 
}
