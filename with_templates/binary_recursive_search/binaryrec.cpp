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
T binaryR( T list[], int start, int end, int num ) {
    
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

     
    cout << endl;
         
    cout << "//////////////////////////////////---Integar List---////////////////////////////////////////" << endl;

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
     
    cout << endl;

    cout << "//////////////////////////////////---Integar List---////////////////////////////////////////" << endl;

    cout << endl;

    
     
    cout << endl;
         
    cout << "//////////////////////////////////---Double List---////////////////////////////////////////" << endl;

    double dlist[20];
    for (int i = 0; i<20 ; i++) {
        dlist[i] = rand() % 100;
    }

    bubbleS(dlist,20);

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << dlist[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    int dnum = 0;
    cout << "What number are you looking for?" <<endl;
    cin >> dnum;

    int dplace = binaryR(dlist, 0 , 20, dnum);

    if (dplace != -1){
         cout << "number at " << dplace + 1 << " spot." <<endl;
    }else{
         cout << "number not in the list" <<endl;
    }
     
    cout << endl;

    cout << "//////////////////////////////////---Double List---////////////////////////////////////////" << endl;

    cout << endl;

      
    cout << endl;
         
    cout << "//////////////////////////////////---Char List---////////////////////////////////////////" << endl;

    char clist[20];
    for (int i = 0; i<20 ; i++) {
        clist[i] = rand() % 100;
    }

    bubbleS(clist,20);

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << clist[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    char cnum = 0;
    cout << "What number are you looking for?" <<endl;
    cin >> cnum;

    int cplace = binaryR(clist, 0 , 20, cnum);

    if (cplace != -1){
         cout << "number at " << cplace + 1 << " spot." <<endl;
    }else{
         cout << "number not in the list" <<endl;
    }
     
    cout << endl;

    cout << "//////////////////////////////////---Double List---////////////////////////////////////////" << endl;

    cout << endl;
}

