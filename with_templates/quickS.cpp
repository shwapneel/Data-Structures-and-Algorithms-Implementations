#include<iostream>
using namespace std;

//chooses a pivot
//puts everything lower than the pivot on front
//puts everything higher than the pivot behind it
//recursivly does this
//will stop when everthing is just 1 element
//then go back all the levels
//since everything is in order to all the pivots, the list is ultimately sorted at the end

template<typename T>
T quickS( T list[], int start, int end) {
    if ( start < end ) {
        int pivot = start;
        int low = start+1;
        int high = end;

        while(low < high) {

            while( low < end && list[low] < list[pivot] ) {
               low++;
            }
            while( high > start && list[high] >= list[pivot] ) {
                high--;
            }     
            if ( low < high ) {
                int temp1 = list[low];
                list[low] = list[high];
                list[high] = temp1;
            } else {
                int temp2 = list[high];
                list[high] = list[pivot];
                list[pivot] = temp2;
                pivot = high;
            }
        }
    

        quickS(list,start,pivot-1);

        quickS(list,pivot+1,end);
    }    

}

int main() {

    cout << endl;
    cout << "Integar list" <<endl;
    int list[7];
    list[0]=100000;
    list[1]=4552;
    list[2]=450;
    list[3]=23;
    list[4]=360;
    list[5]=6;
    list[6]=8;

    quickS( list, 0, 6 );




    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<7 ; i++ ) {
        cout << list[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;

    cout << endl;   
 
    
    cout << endl;
    cout << "Double list" <<endl;
    double dlist[7];
    dlist[0]=100000;
    dlist[1]=4552;
    dlist[2]=450;
    dlist[3]=23;
    dlist[4]=360;
    dlist[5]=6;
    dlist[6]=8;

    quickS( dlist, 0, 6 );




    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<7 ; i++ ) {
        cout << dlist[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;

    cout << endl;   
    
    cout << endl;   
 
    
    cout << endl;
    cout << "char list" <<endl;
    char clist[7];
    clist[0]=100;
    clist[1]=52;
    clist[2]=50;
    clist[3]=23;
    clist[4]=30;
    clist[5]=6;
    clist[6]=8;

    quickS( clist, 0, 6 );




    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<7 ; i++ ) {
        cout << clist[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;

    cout << endl;   
 
}
