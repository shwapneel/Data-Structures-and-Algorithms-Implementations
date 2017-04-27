#include<iostream>
#include<stdlib.h>
using namespace std;

template<typename T>
T bubbleS( T list[], int size ) {
    //for every number in the list
    for( int i = 0; i < size; i++ ) {

        //for each number in the list
        for( int j = 0; j < (size-1); j++ ) {
            if( list[j] > list[j+1] ) {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}


int main() {
    int intList[20];
    for (int i = 0; i<20 ; i++) {
        intList[i] = rand() % 100;
    }

    bubbleS(intList,20);

    double doubleList[20];
    for (int i = 0; i<20 ; i++) {
        doubleList[i] = rand();
    }

    bubbleS(doubleList,20);

    char charList[20];
    for (int i = 0; i<20 ; i++) {
        charList[i] = rand() % 100;
    }

    bubbleS(charList,20);

    cout <<endl;
    cout <<endl;
    cout << "sorted random integer List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << intList[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;
    cout <<endl;
    
    cout <<endl;
    cout <<endl;
    cout << "sorted random decimal List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << doubleList[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;
    cout <<endl;

    cout <<endl;
    cout <<endl;    
    cout << "sorted random character List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << charList[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;
    cout <<endl;
}

