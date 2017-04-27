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

template<typename T>
T binaryS ( T list[], int size , int num ){
    
    //breaks list into two continuosly until value is found
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

    cout << "//////////////////////////---- using integers ----////////////////////////" <<endl;

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

    
    cout << "//////////////////////////---- using integers ----////////////////////////" <<endl;

    cout << endl;
    
    cout << "//////////////////////////---- using decimels ----////////////////////////" <<endl;
    cout << "* won't work for doubles in C++ because program involves checking doubles for equality" <<endl;
    cout << endl;    

    double double_list[20];
    for (int i = 0; i<20 ; i++) {
        double_list[i] = rand();
    }

    bubbleS(double_list,20);

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << double_list[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    double dnum = 0;

    cout << "What number are you searching for?" <<endl;
    cin >> dnum;

    double double_out = binaryS ( double_list, 20 , dnum );


    if (double_out >= 0){
        cout << "number in the " << double_out +1 << " place. " ;
    }else{
        cout << "number not found";
    }
    cout << endl;

    
    cout << "//////////////////////////---- using doubles ----////////////////////////" <<endl;

    cout << endl;

    cout << "//////////////////////////---- using characters ----////////////////////////" <<endl;

    char char_list[20];
    for (int i = 0; i<20 ; i++) {
        char_list[i] = rand() % 100;
    }

    bubbleS(char_list,20);

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << char_list[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    char cnum = 0;

    cout << "What character are you searching for?" <<endl;
    cin >> cnum;

    char char_out = binaryS ( char_list, 20 , cnum );


    if (char_out >= 0){
        cout << "number in the " << char_out +1 << " place. " ;
    }else{
        cout << "number not found";
    }
    cout << endl;

    
    cout << "//////////////////////////---- using characters ----////////////////////////" <<endl;

    cout << endl;
      

}
