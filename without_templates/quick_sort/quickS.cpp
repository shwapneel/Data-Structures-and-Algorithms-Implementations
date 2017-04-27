#include<iostream>
using namespace std;

//chooses a pivot
//puts everything lower than the pivot on front
//puts everything higher than the pivot behind it
//recursivly does this
//will stop when everthing is just 1 element
//then go back all the levels
//since everything is in order to all the pivots, the list is ultimately sorted at the end

int quickS( int list[], int start, int end) {
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
    int list[10];
    list[0]=1000000;
    list[1]=4552;
    list[2]=450;
    list[3]=23;
    list[4]=360;
    list[5]=6;
    list[6]=6;
    list[7]=8;
    list[8]=8;
    list[9]=8;

    quickS( list, 0, 9 );



    cout <<endl;
    cout << "List: ------------"<<endl;	
    for ( int i = 0; i < 10; i++ ) {
        cout << list[i] << ", ";
    }
    cout <<endl;
    cout << "------------------";
    cout <<endl;

    
    return 0;
}
