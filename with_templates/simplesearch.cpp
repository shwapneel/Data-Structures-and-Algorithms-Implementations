#include<iostream>
#include<stdlib.h>
using namespace std;

template<typename T>
bool sequentialsearch( T list[], int size, int num ) {
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
    cout << endl;
    cout << " integar list/search " << endl;
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

    cout << endl;
    cout << " double list/search " << endl;
    double dlist[20];
    for (int i = 0; i<20 ; i++) {
        dlist[i] = rand() % 100;
    }

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << dlist[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    double dnum = 0;
    cout << "What number are you searching for?: ";
    cin >> dnum;

    if(sequentialsearch(dlist,20,dnum)){
        cout << "number appears in the list" <<endl;
    }else{
        cout << "number does not appear in the list" <<endl;
    }

    cout << endl;
    cout << " char list/search " << endl;
    char clist[20];
    for (int i = 0; i<20 ; i++) {
        clist[i] = rand() % 200;
    }

    cout << "List: ------------"<<endl;	
    for ( int i = 0; i<20 ; i++ ) {
        cout << clist[i] << ", ";
    }
    cout << "------------------";
    cout <<endl;

    char cnum = 0;
    cout << "What number are you searching for?: ";
    cin >> cnum;

    if(sequentialsearch(clist,20,cnum)){
        cout << "number appears in the list" <<endl;
    }else{
        cout << "number does not appear in the list" <<endl;
    }

}

