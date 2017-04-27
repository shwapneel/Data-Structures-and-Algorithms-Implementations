#include<iostream>
#include<stdlib.h>
using namespace std;


bool sequentialsearch( int list[], int size, int num ) {
    bool check = false;	

    for ( int i = 0; i<20 ; i++ ) {
        if( num == list[i] ) {
            check = true;
            break;
        }
    }
    
    return check;       

}

int main() {
    int list[20];
    for (int i = 0; i<20 ; i++) {
        list[i] = rand() % 100;
    }

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << list[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    int num = 0;
    cout << "What number are you searching for?: ";
    cin >> num;

    if(sequentialsearch(list,20,num)){
        cout << "number appears in the list" <<endl;
    }else{
        cout << "number does not appear in the list" <<endl;
    }

}

