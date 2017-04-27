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

int binaryR( int list[], int start, int end, int num ) {
    
    if( start > end ) {
        return -1;
    }        

    int mid = (end + start)/2;
    if ( num == list[mid] ) {
         return mid;
    } else if ( num < list[mid] ) {
         return binaryR( list, start, mid-1, num );     
    } else if ( num > list[mid] ) {
         return binaryR( list, mid+1, end, num );
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

    int num = 0;
    cout << "What number are you looking for?" <<endl;
    cin >> num;

    int place = binaryR(list, 0 , 20, num);

    if (place != -1){
         cout << "number at " << place + 1 << " spot." <<endl;
    }else{
         cout << "number not in the list" <<endl;
    }

}

