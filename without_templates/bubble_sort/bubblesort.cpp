#include<iostream>
#include<stdlib.h>
using namespace std;

int bubbleS( int list[], int size ) {
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
    int list[20];
    for (int i = 0; i<20 ; i++) {
        list[i] = rand() % 100;
    }

    bubbleS(list,20);

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << list[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;
}

