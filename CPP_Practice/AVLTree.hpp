//
//  AVLTree.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/10/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include <stdio.h>
#include <iostream>
#include "bNode.hpp"


using namespace std;

class AVLTree {
private:
    bNode *root;
    void freeNode(bNode *leaf);
public:
    //constructor & destructore
    AVLTree();
    ~AVLTree();
    
    //getters
    bNode *Root() {return root;}
    
    //node operations
    bNode *addNode(bNode *,double value);
    int height(bNode *);
    int b_factor(bNode *);
    
    //rotation operations
    bNode *balance(bNode *);
    bNode *rrRotate(bNode *);
    bNode *llRotate(bNode *);
    bNode *rlRotate(bNode *);
    bNode *lrRotate(bNode *);
    
    
    //travrsal
    void display(bNode *ptr, int level);
    void InOrder(bNode *);
    void PreOrder(bNode *);
    void PostOrder(bNode *);
};


#endif /* AVLTree_hpp */
