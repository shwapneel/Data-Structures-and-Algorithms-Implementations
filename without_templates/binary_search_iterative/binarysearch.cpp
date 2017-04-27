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

int binaryS ( int list[], int size , int num ){
    

    int start = 0;
    int end = size;

    while ( end >= start ) {
        int mid = (end + start)/2;
        
        if (num == list[mid]){
            return mid;
        }else if(num < list[mid]){
            end = mid - 1;
        }else if(num > list[mid]){
            start = mid + 1;
        }
        
    }

    return -1;
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

    cout << "What number are you searching for?" <<endl;
    cin >> num;

    int out = binaryS ( list, 20 , num );


    if (out >= 0){
        cout << "number in the " << out +1 << " place. " ;
    }else{
        cout << "number not found";
    }
    cout << endl;
}
