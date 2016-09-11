//
//  binary_tree.cpp
//  CPP_Practice
//


#include "binary_tree.hpp"


using namespace std;

//Constructor
BTree::BTree() {root = NULL;}

//Destructor
BTree::~BTree() {freeNode(root);}

//private freeNode function that recursively destructs the tree.
void BTree::freeNode(Node *leaf){
    if(leaf !=NULL){
        freeNode(leaf->Left());
        freeNode(leaf->Right());
        delete leaf;
    }
}


//private addNode function that descends throught the tree and adds the node at the correct position.
void BTree::addNode(double value, Node *leaf) {
    if ( value <= leaf->getValue() ) {
        if ( leaf->Left() != NULL )
            addNode(value, leaf->Left());
        else {
            Node* n = new Node();
            n->SetValue(value);
            leaf->SetLchild(n);
            n->SetParent(leaf);
        }
    }
    else {
        if ( leaf->Right() != NULL )
            addNode(value, leaf->Right());
        else {
            Node* n = new Node();
            n->SetValue(value);
            leaf->SetRchild(n);
            n->SetParent(leaf);
        }
    }
}


//public addNode function that adds the node as the root if the root = NULL or calls the addNode function so that the Node can be added recursively.
void BTree::addNode(double value) {
    if ( root == NULL ) {
        cout << "add root node ... " << value << endl;
        Node* n = new Node();
        n->SetValue(value);
        root = n;
    }
    else {
        
        cout << "add other node ... " << value << endl;
        addNode(value, root);
    }
}

//travesrses the tree and prints the node values inorder so left child, parent, right child.
void BTree::InOrder(Node *leaf) {
    if(leaf) {
        InOrder(leaf->Left());
        cout<<leaf->getValue()<<" ";
        InOrder(leaf->Right());
    }
}

//traverses the tree and prints the node values in the order: parent, left child, right child.
void BTree::PreOrder(Node *leaf) {
    if(leaf) {
        cout<<leaf->getValue()<<" ";
        /*
         if(leaf != root) {cout<<"leaf "<<leaf->getValue()<<"'s parent is "<<(leaf->Parent())->getValue()<<endl;}
        else {cout<<"root is "<<leaf->getValue()<<endl;}
         */
        PreOrder(leaf->Left());
        PreOrder(leaf->Right());
    }
}

//traverses the tree and prints the node values in the order: left child, right child, parent
void BTree::PostOrder(Node *leaf) {
    if(leaf){
        PostOrder(leaf->Left());
        PostOrder(leaf->Right());
        cout<<leaf->getValue()<<" ";
    }
}








