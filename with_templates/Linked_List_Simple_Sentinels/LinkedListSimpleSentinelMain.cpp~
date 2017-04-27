#include<iostream>
#include"LinkedListSimpleSentinel.h"
using namespace std;

template<typename T>
void menu ( List<T>& mylist ) {
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
           T z = 0;
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
           T w = 0;
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

int main () {
    
    
    List<int> mylist1;
    List<double> mylist2;
    List<char> mylist3;

    cout << "///////////////////////////// Int Linked list //////////////////////////////////////" <<endl;
    menu ( mylist1 );

    cout << "///////////////////////////// Double Linked list //////////////////////////////////////" <<endl;
    menu ( mylist2 );
 
    cout << "///////////////////////////// Char Linked list //////////////////////////////////////" <<endl;
    menu ( mylist3 );
}
