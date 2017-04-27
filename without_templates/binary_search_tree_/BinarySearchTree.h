#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node* parent;
};

class Tree {
    private:
        Node* root;
    public:

        Tree () ;

        void insert_call ( int insert_data );

        void insert ( Node* root_temp, Node* new_node );

        void in_order_traverse_call ( );

        void in_order_traverse ( Node* root_temp );

        void pre_order_traverse_call ( );

        void pre_order_traverse ( Node* root_temp );

        void post_order_traverse_call ( );
        
        void post_order_traverse ( Node* root_temp );

        Node* Search ( Node* root_temp, int search_data );

        Node* Min ( Node* root_temp );

        void deletion_head ( int search_data );

        void deletion ( int search_data );
        
        void successor ( int suc_data );

};
