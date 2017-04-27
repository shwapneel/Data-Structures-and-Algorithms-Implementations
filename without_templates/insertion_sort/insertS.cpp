#include<iostream>
using namespace std;

int insertS( int list[] , int size ) {

    for( int j = 1; j < size; j++ ){         // j is the number we wish to insert

        for( int i = j - 1; i >= 0; i-- ) {  // i is the set of sorted numbers

            if( list[i+1] < list[i] ) {
                //store value of the variable we are moving
                int temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;    
            }
        }
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

    insertS(list,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << list[i] << ", ";
    }
}
