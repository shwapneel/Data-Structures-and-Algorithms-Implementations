#include<iostream>
#include"BinarySearchTree.h"
using namespace std;

template <typename T>
void menu ( Tree<T>& mytree ) {
    int y = 9;

    while ( y == 9 ) {                                           //loops the program

        //the menu
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "which operation would you like to do" <<endl;
        cout << "1) insertion" <<endl;
        cout << "2) display" <<endl;
        cout << "3) deletion" <<endl;
        cout << "4) successor" <<endl;
        cout << "5) exit" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;

        //user command
        int x = 2;

        //actual menu functions being implemented using the list class
        cout << "Your input: "; 
        cin >> x;

        if ( x == 1 ) {                                               //insertion
           T z = 0;
           cout << "What number do you want to insert?" <<endl; 
           cin >> z;

           mytree.insert_call(z);

        } else if ( x == 2 ) {                                        //display

           
           cout << endl;
           cout << "IN ORDER LIST:" << endl;
           mytree.in_order_traverse_call();
           cout << endl;
           cout << "PRE ORDER LIST:" << endl;
           mytree.pre_order_traverse_call();
           cout << endl;
           cout << "POST ORDER LIST:" << endl;
           mytree.post_order_traverse_call();
           cout << endl;    

        } else if ( x == 3 ) {                                       //deletion
           T w = 0;
           cout << "What number do you want to delete?" <<endl; 
           cin >> w;
           
           mytree.deletion (w);

        } else if ( x == 4 ){                                        //exit the loop
           T u = 0;
           cout << "What number do you want to find the successor of?" <<endl; 
           cin >> u;
           
           mytree.successor (u);
    
        } else if ( x == 5 ){                                        //exit the loop
             y = 1000;
        } else {
             cout << "INVALID ANSWER" <<endl;
        }
    }

}

int main () {
    
    Tree<int> mytree1;
    Tree<double> mytree2;
    Tree<char> mytree3;

    cout << "///////////////////////////// Int Binary Tree  //////////////////////////////////////" <<endl;
    menu ( mytree1 );

    cout << "///////////////////////////// Double Binary Tree  //////////////////////////////////////" <<endl;
    menu ( mytree2 );
 
    cout << "///////////////////////////// Char Binary Tree  //////////////////////////////////////" <<endl;
    menu ( mytree3 );
}
