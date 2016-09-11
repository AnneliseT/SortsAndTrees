//
//  bNode.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/10/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#ifndef bNode_hpp
#define bNode_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class bNode{
private:
    bNode *Lchild;
    bNode *Rchild;
    bNode *parent;
    double value;
public:
    //constructors
    bNode();
    bNode(double value);
    
    //setters
    void SetLchild(bNode *l) {Lchild = l;}
    void SetRchild(bNode *r) {Rchild = r;}
    void SetParent(bNode *p) {parent = p;}
    void SetValue(double value) {this->value = value;}
    
    //getters
    bNode *Left() {return Lchild;}
    bNode *Right() {return Rchild;}
    bNode *Parent() {return parent;}
    double getValue() {return value;}
    
    //other functions
    
};


#endif /* bNode_hpp */
