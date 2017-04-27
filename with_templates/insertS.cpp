#include<iostream>
using namespace std;

template<typename T>
T insertS( T list[] , int size ) {

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

    cout << endl;
    cout << "integar list:    "<<endl;
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

    cout << endl;
    cout << "double list:    "<<endl;
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

    insertS(dlist,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << dlist[i] << ", ";
    }

    cout << endl;
    cout << "character list:    "<<endl;
    char clist[20];
    clist[0]=23;
    clist[1]=255;
    clist[2]=233;
    clist[3]=55;
    clist[4]=3;
    clist[5]=3;
    clist[6]=21;
    clist[7]=3;
    clist[8]=5;
    clist[9]=37;
    clist[10]=67;
    clist[11]=56;
    clist[12]=21;
    clist[13]=35;
    clist[14]=46;
    clist[15]=85;
    clist[16]=54;
    clist[17]=71;
    clist[18]=2;
    clist[19]=65;

    insertS(clist,20);
    
    for( int i=0 ; i<20 ; i++ ){
        cout << clist[i] << ", ";
    }
}
