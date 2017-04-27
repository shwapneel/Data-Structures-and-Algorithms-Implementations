#include<iostream>
#include"BinarySearchTree.h"
using namespace std;

Tree::Tree ( ) {
    root = 0;
}

//calls the recurive part of insert
void Tree::insert_call ( int insert_data ) {
    
    //declares the 1st node
    Node* new_node = new Node;
    new_node -> data = insert_data;
    new_node -> left = 0;
    new_node -> right = 0;
    new_node -> parent = 0;
             
    insert ( root, new_node );
}

//recursivly finds a spot to insert the new node
void Tree::insert ( Node* root_temp, Node* new_node ) {

    
    //insert the 1st node if tree is empty
    if ( root == 0 ) {

        //inserting the 1st node
        root = new_node;
        return;
    }

    //recursivly add elements
    //checks which branch to insert to
    //then checks if the branch is empty to insert to
    if ( new_node -> data < root_temp -> data ) {
        if (root_temp -> left == 0) {
            root_temp -> left = new_node;
            new_node -> parent = root_temp;
        } else {
            insert ( root_temp -> left, new_node );
        }
    } else if ( new_node -> data >= root_temp -> data ) {
        if (root_temp -> right == 0){
            root_temp -> right = new_node;
            new_node -> parent = root_temp;
        } else {
            insert ( root_temp -> right, new_node );
        }
    } 
}


//calls the in order function
void Tree::in_order_traverse_call ( ) {
    in_order_traverse ( root );
}

//outputs list from least to greatest
void Tree::in_order_traverse ( Node* root_temp ) {
    if ( root_temp != 0 ){
        if ( root_temp -> left != 0 ) {
            in_order_traverse ( root_temp -> left );
        }
        cout << root_temp -> data <<endl;

        if ( root_temp -> right != 0 ){ 
            in_order_traverse ( root_temp -> right );
        }
    }
}

//calls the pre order function
void Tree::pre_order_traverse_call ( ) {
    pre_order_traverse ( root );
}

void Tree::pre_order_traverse ( Node* root_temp ) {
   if ( root_temp != 0 ){
        cout << root_temp -> data <<endl;
        if ( root_temp -> left != 0 ) {
            pre_order_traverse ( root_temp -> left );
        }
        if ( root_temp -> right != 0 ){ 
            pre_order_traverse ( root_temp -> right );
        }
    }
}


//calls the post order function
void Tree::post_order_traverse_call ( ) {
    post_order_traverse ( root );
}

void Tree::post_order_traverse ( Node* root_temp ) {
    if ( root_temp != 0 ){
        cout << root_temp -> data <<endl;
        if ( root_temp -> left != 0 ) {
            post_order_traverse ( root_temp -> left );
        }
        if ( root_temp -> right != 0 ){ 
            post_order_traverse ( root_temp -> right );
        }
    }
}

// search
Node* Tree::Search ( Node* root_temp, int search_data ) {

   if ( root_temp == 0 ) { //searching in an empty list
       return 0;
   }

   if ( root_temp -> data == search_data ) {
       return root_temp;
   }

   if ( root_temp -> left != 0 && search_data < root_temp -> data ) {
       //recurse left
       Search ( root_temp -> left, search_data );
   } else if (  root_temp -> right != 0 && search_data >= root_temp -> data ) {
       //recurse right
       Search ( root_temp -> right, search_data );
   } else {
       return 0;
   }
}


// minimum
Node* Tree::Min ( Node* root_temp ) {
    
    if ( root_temp -> right != 0 ) {    
        root_temp = root_temp -> right;
    }

    //finds the smallest value on the max/ right branch
    while ( root_temp -> left != 0 ) {
        root_temp = root_temp -> left;
    }

    return root_temp;
}

void Tree::deletion_head ( int search_data ) {
    if ( root -> left == 0 && root -> right == 0 ){
    
        Node* hold = root;
        root = 0;
        delete hold;
        return;

    } else if ( root -> left != 0 && root -> right != 0 ) {
        
        //finding the smallest root on the right child subbranches
        Node* min = Min ( root );

        //replaceing roots value with the value from the node found in the previous step

        root -> data = min -> data;

        //deleting min:
        ////////////////////////////////////////////////////////////////////////////////////////
        //check how many children the parent node has
        if ( min -> left == 0 && min -> right == 0 ) {                        //No children
 
            //checks if the node is a left or right child
            if ( (min -> parent) -> left == min ) {
                (min -> parent) -> left = 0;
                delete min;
                return;
            } else if ( (min -> parent) -> right == min ) {
               (min -> parent) -> right = 0;
               delete min;
               return;
            }

        } else if (  min -> right != 0 ) {                                   //One children //already know min -> left == 0

             //finds out whether the root is a left or right child to its parent
             if ( (min -> parent) -> left == min ) {
       
                (min -> parent) -> left = min -> right;
                (min -> right) -> parent = min -> parent;
                delete min;
                return;
         
             } else if ( (min -> parent) -> right == min ) {
       
                (min -> parent) -> right = min -> right;
                (min -> right) -> parent = min -> parent;
                delete min;
                return;
       
             }

        }           
        ///////////////////////////////////////////////////////////////////////////////// 

 
       
    } else if ( root -> left != 0 || root -> right != 0 ) {
        if ( root -> left != 0 ) {

            root -> left -> parent = 0;
            delete root;
            root = root -> left;
            return;

        } else if ( root -> right != 0 ) {

            root -> right -> parent = 0;
            delete root;
            root = root -> right;
            return;

        }    
    }
}

void Tree::deletion ( int search_data ) {
    
    Node* root_temp = Search ( root, search_data );

    if ( root_temp == 0 ) {                                                                             //in case no match found
       return;
    }
    
 
    if ( root_temp == root ) {                                                                             //in case no match found
       deletion_head ( search_data );
       return;
    }   

    //check how many children the parent node has
    if ( root_temp -> left == 0 && root_temp -> right == 0 ) {                                          //No children
 
        //checks if the node is a left or right child
        if ( (root_temp -> parent) -> left == root_temp ) {
            (root_temp -> parent) -> left = 0;
            delete root_temp;
            return;
        } else if ( (root_temp -> parent) -> right == root_temp ) {
            (root_temp -> parent) -> right = 0;
            delete root_temp;
            return;
        }

    
    } else if ( root_temp -> left != 0 && root_temp -> right != 0 ) {                                   //Two children
        
        //finding the smallest root on the right child subbranches
        Node* min = Min ( root_temp );

        //replaceing roots value with the value from the node found in the previous step
        root_temp -> data = min -> data;


        //deleting min:
        ////////////////////////////////////////////////////////////////////////////////////////
        //check how many children the parent node has
        if ( min -> left == 0 && min -> right == 0 ) {                                          //No children
 
            //checks if the node is a left or right child
            if ( (min -> parent) -> left == min ) {
                (min -> parent) -> left = 0;
                delete min;
                return;
            } else if ( (min -> parent) -> right == min ) {
               (min -> parent) -> right = 0;
               delete min;
               return;
            }

        } else if (  min -> right != 0 ) {                                   //One children  //already know min -> left == 0

             //finds out whether the root is a left or right child to its parent
             if ( (min -> parent) -> left == min ) {
       
                (min -> parent) -> left = min -> right;
                (min -> right) -> parent = min -> parent;
                delete min;
                return;
         
             } else if ( (min -> parent) -> right == min ) {
       
                (min -> parent) -> right = min -> right;
                (min -> right) -> parent = min -> parent;
                delete min;
                return;
       
             }

        }           
        ///////////////////////////////////////////////////////////////////////////////// 


    } else if ( root_temp -> left != 0 || root_temp -> right != 0 ) {                                   //One children


        //finds out whether the root's child is left or right
        if ( root_temp -> left != 0 ) {

            
            //finds out whether the root is a left or right child to its parent
            if ( (root_temp -> parent) -> left == root_temp ) {

               (root_temp -> parent) -> left = root_temp -> left;
               (root_temp -> left) -> parent = root_temp -> parent;
               delete root_temp;
               return;

            } else if ( (root_temp -> parent) -> right == root_temp ) {
                
               (root_temp -> parent) -> right = root_temp -> left;
               (root_temp -> left) -> parent = root_temp -> parent;
               delete root_temp;
               return;

            }

        } else if ( root_temp -> right != 0 ) {
            
            //finds out whether the root is a left or right child to its parent
            if ( (root_temp -> parent) -> left == root_temp ) {
       
               (root_temp -> parent) -> left = root_temp -> right;
               (root_temp -> right) -> parent = root_temp -> parent;
               delete root_temp;
               return;

         
            } else if ( (root_temp -> parent) -> right == root_temp ) {
       
               (root_temp -> parent) -> right = root_temp -> right;
               (root_temp -> right) -> parent = root_temp -> parent;
               delete root_temp;
               return;
       
            }

        }

    } else {
        cout << "ERROR" <<endl;
    }
}

//WORK ON THIS:

void Tree::successor ( int suc_data ) {
    
    Node* successor = Search ( root, suc_data );
    
    if ( successor == 0 ) {
        cout << "ERROR, NO VALID VALUE" <<endl;
        return;
    }

    if ( successor -> right != 0 ) {
        successor = successor -> right;
        while ( successor -> left != 0 ) {
            successor = successor -> left;
        }
        cout << "Successor is: " << successor -> data <<endl;
        return; 
  
    }

    if ( successor -> data < root -> data) {            //left side of root
        if ( successor -> parent != 0 && successor -> parent -> left == successor) {
           cout << "Successor is: " << successor -> parent -> data <<endl;
           return;
        } else if ( successor -> parent != 0 && successor -> parent -> parent != 0 && successor -> parent -> right == successor ) {
           cout << "Successor is: " <<  successor -> parent -> parent -> data <<endl;
           return; 
        } else {
           cout << "There is no successor" <<endl;
           return;
        }
    } else if ( successor -> data >= root -> data ) {      //right side of root
        if ( successor -> parent != 0 && successor -> parent -> right == successor) {
           cout << "There is no successor" <<endl;
           return;
        } else if ( successor -> parent != 0 && successor -> parent -> left == successor) {
           cout << "Successor is: " << successor -> parent -> data <<endl;
           return; 
        } else {
           cout << "There is no successor" <<endl;
           return;
        }
    } 
}





