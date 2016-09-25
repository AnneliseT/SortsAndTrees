//
//  binary_tree.hpp
//  CPP_Practice


#ifndef binary_tree_hpp
#define binary_tree_hpp

#include <stdio.h>
#include <iostream>
#include "node.hpp"

using namespace std;

class BTree {
private:
    Node *root;
    void addNode(double value, Node *leaf);
    void freeNode(Node *leaf);
public:
    BTree();
    ~BTree();
    Node *Root() {return root;}
    void addNode(double value);
    void InOrder(Node *);
    void PreOrder(Node *);
    void PostOrder(Node *);
    void BFS(Node *);
};

#endif /* binary_tree_hpp */
