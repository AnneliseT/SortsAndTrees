//
//  AVLTree.cpp
//  CPP_Practice
//

#include "AVLTree.hpp"
#include <iostream>
#include <algorithm>

//Constructor
AVLTree::AVLTree() {root = NULL;}


//Destructor
AVLTree::~AVLTree() {freeNode(root);}

//is called by the destructor to recursively delete nodes in the tree
void AVLTree::freeNode(bNode *leaf) {
    if(leaf !=NULL){
        freeNode(leaf->Left());
        freeNode(leaf->Right());
        delete leaf;
    }
}



//inserts a node into a tree and calls balance to rearrange the tree if necessary
bNode *AVLTree::addNode(bNode *root, double value) {
    if(root == NULL) {
        root = new bNode(value);
        return root;
    } else if(value < root->getValue()){
        root->SetLchild(addNode(root->Left(), value));
        root = balance(root);
    } else if(value >= root->getValue()) {
        root->SetRchild(addNode(root->Right(), value));
        root = balance(root);
    }
    return root;
}


//Gets the height of the tree
int AVLTree::height(bNode *leaf) {
    int h = 0;
    if(leaf){
        int l_height = height(leaf->Left());
        int r_height = height(leaf->Right());
        int max_height= max(l_height,r_height);
        h = max_height + 1;
    }
    return h;
}


//finds the balance factor of the AVL tree
int AVLTree::b_factor(bNode *leaf) {
    int l_height = height(leaf->Left());
    int r_height = height(leaf->Right());
    int balance = l_height - r_height;
    return balance;
}


//balances the tree if an insertion causes the tree to beocme unalanced
bNode *AVLTree::balance(bNode *leaf) {
    int factor = b_factor(leaf);
    if(factor > 1) {
        if(b_factor(leaf->Left()) > 0) {
            leaf =llRotate(leaf);
        } else {
            leaf = lrRotate(leaf);
        }
    } else if (factor < -1){
        if(b_factor(leaf->Right()) > 0) {
            leaf = rlRotate(leaf);
        } else {
            leaf = rrRotate(leaf);
        }
    }
    return leaf;
}


//rotates the tree or sub tree right
bNode *AVLTree::rrRotate(bNode *parent) {
    bNode *temp;
    temp = parent->Right();
    parent->SetRchild(temp->Left());
    temp->SetLchild(parent);
    return temp;
}

//rotates the tree or subtree left
bNode *AVLTree::llRotate(bNode *parent) {
    bNode *temp;
    temp = parent->Left();
    parent->SetLchild(temp->Right());
    temp->SetRchild(parent);
    return temp;
}

//rotates the tree or subtree right then left
bNode *AVLTree::rlRotate(bNode *parent) {
    bNode *temp;
    temp = parent->Right();
    parent->SetRchild(llRotate(temp));
    return rrRotate(parent);
}


//rotates the tree or subtree left then right
bNode *AVLTree::lrRotate(bNode  *parent) {
    bNode *temp;
    temp = parent->Left();
    parent->SetLchild(rrRotate(temp));
    return llRotate(parent);
}


//Displays the tree structure. the tree is displayed horizontally from left to right.
void AVLTree::display(bNode *ptr, int level) {
    int i;
    if (ptr!=NULL)
    {
        display(ptr->Right(), level + 1);
        printf("\n");
        if (ptr == root)
            cout<<"Root -> ";
        for (i = 0; i < level && ptr != root; i++)
            cout<<"        ";
        cout<<ptr->getValue();
        display(ptr->Left(), level + 1);
    }
}


//travesrses the tree and prints the node values inorder so left child, parent, right child.
void AVLTree::InOrder(bNode *leaf) {
    if(leaf) {
        InOrder(leaf->Left());
        cout<<leaf->getValue()<<" ";
        InOrder(leaf->Right());
    }
}

//traverses the tree and prints the node values in the order: parent, left child, right child.
void AVLTree::PreOrder(bNode *leaf) {
    if(leaf) {
        cout<<leaf->getValue()<<" ";
        /*
        cout<<endl;
        if(leaf->Left()!=NULL ) {
            cout<<"lchild is :"<<leaf->Left()->getValue()<<endl;
        }
        if(leaf->Right()!=NULL) {
            cout<<"Rhcild is :"<<leaf->Right()->getValue()<<endl;
        }
         */
        
        PreOrder(leaf->Left());
        PreOrder(leaf->Right());
    }
}

//traverses the tree and prints the node values in the order: left child, right child, parent
void AVLTree::PostOrder(bNode *leaf) {
    if(leaf){
        PostOrder(leaf->Left());
        PostOrder(leaf->Right());
        cout<<leaf->getValue()<<" ";
    }
}
