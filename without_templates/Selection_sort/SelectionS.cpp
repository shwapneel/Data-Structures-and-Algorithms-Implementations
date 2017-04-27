#include<iostream>
using namespace std;

int selectionS( int list[] , int size ) {
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
}
