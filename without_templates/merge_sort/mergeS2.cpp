#include<iostream>
#include<stdlib.h>
using namespace std;


int merge ( int list[], int start,int mid, int end ){
    int Lnum = mid - start + 1;
    int Rnum = end - mid;
    int Larray[Lnum];
    int Rarray[Rnum];



    // copy to new arrays
    int j = 0;
    for( int i = start; i <= mid; i++ ) {
        Larray[j] = list[i];
        j++;
    }
    int k = 0;
    for(int i= mid+1; i <= end; i++ ) {
        Rarray[k] = list[i];
        k++;
    }

     //copy the elemets back to list
     j = 0;
     k = 0;
     int place = -1;
     for( int i = start; i <= end; i++ ) {
         if ( j < Lnum && k < Rnum) {
             if (Larray[j]<=Rarray[k]){
                 list[i]=Larray[j];
                 j++;
             } else {
                 list[i]=Rarray[k];
                 k++;
             }
         } else {
             place = i;
             i = end+9;   
         }
     }

     if( j >= Lnum && k < Rnum ) {
         for( int i = place; i <= end; i++ ) {
             list[i]=Rarray[k];
             k++;
         }
     }else if( k >= Rnum && j < Lnum ){
         for( int i = place; i <= end; i++ ) {
                 list[i]=Larray[j];
                 j++;
         }
     }







}


void mergeS( int list[], int start, int end ) {


    int mid;
    if( start < end ) {

        mid = (start+end)/2;

       //break the array in half and recusively break it into 2 until its split into its individual elements
       mergeS( list, start, mid );
       mergeS( list, mid+1, end );

       //sort the individual elements/arrays until it is all sorted
       merge ( list, start, mid, end );
     }    


}


int main() {
    int list[7];
    list[0]=100000;
    list[1]=4552;
    list[2]=450;
    list[3]=23;
    list[4]=360;
    list[5]=6;
    list[6]=8;

    mergeS( list, 0, 6 );




    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<7 ; i++ ) {
        cout << list[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;

    
    return 0;
}
