#include<iostream>
using namespace std;

template<typename T>
T selectionS( T list[] , int size ) {
    int minSpot = 0;
    for ( int i = 0; i < size; i++ ) {          // i correspondes to the spot in the list
        int min = 1000000000;                   // min is the minimum value in a set of numbers

        //will go through the list, find the minimum, assign it to the frontmost unsorted spot
        //decrease the number of unsorted numbers by one and repeat

        for ( int j = i; j < size; j++ ) {      // j is the specific minimum number we are moving
             if ( list[j] < min ) {             
                 min = list[j];
                 minSpot = j;
             }
        }
        int temp = list[i];
        list[i] = list[minSpot];
        list[minSpot] = temp;
        
    }
}

int main(){
    cout << endl;
    cout << "integar list " <<endl;
    int list[20];
    list[0]=23;
    list[1]=2554;
    list[2]=233;
    list[3]=55;
    list[4]=3;
    list[5]=3;
    list[6]=321;
    list[7]=433;
    list[8]=5;
    list[9]=637;
    list[10]=6957;
    list[11]=56;
    list[12]=421;
    list[13]=35;
    list[14]=346;
    list[15]=875;
    list[16]=54;
    list[17]=71;
    list[18]=2;
    list[19]=65;

    selectionS(list,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << list[i] << ", ";
    }

    cout << endl;
    cout << "double list " <<endl;
    double dlist[20];
    dlist[0]=23;
    dlist[1]=2554;
    dlist[2]=233;
    dlist[3]=55;
    dlist[4]=3;
    dlist[5]=3;
    dlist[6]=321;
    dlist[7]=433;
    dlist[8]=5;
    dlist[9]=637;
    dlist[10]=6957;
    dlist[11]=56;
    dlist[12]=421;
    dlist[13]=35;
    dlist[14]=346;
    dlist[15]=875;
    dlist[16]=54;
    dlist[17]=71;
    dlist[18]=2;
    dlist[19]=65;

    selectionS(dlist,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << dlist[i] << ", ";
    }

    cout << endl;
    cout << "char list " <<endl;
    char clist[20];
    clist[0]=23;
    clist[1]=25;
    clist[2]=233;
    clist[3]=55;
    clist[4]=3;
    clist[5]=3;
    clist[6]=21;
    clist[7]=33;
    clist[8]=5;
    clist[9]=37;
    clist[10]=97;
    clist[11]=56;
    clist[12]=41;
    clist[13]=35;
    clist[14]=36;
    clist[15]=75;
    clist[16]=54;
    clist[17]=71;
    clist[18]=2;
    clist[19]=65;

    selectionS(clist,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << clist[i] << ", ";
    }
}
