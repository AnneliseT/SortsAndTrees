//
//  node.hpp
//  CPP_Practice
//
//  

#ifndef node_hpp
#define node_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Node{
private:
    Node *Lchild;
    Node *Rchild;
    Node *parent;
    double value;
public:
    Node();
    Node(double value);
    void SetLchild(Node *l) {Lchild = l;}
    void SetRchild(Node *r) {Rchild = r;}
    void SetParent(Node *p) {parent = p;}
    void SetValue(double value) {this->value = value;}
    Node *Left() {return Lchild;}
    Node *Right() {return Rchild;}
    Node *Parent() {return parent;}
    double getValue() {return value;}
    
};

#endif /* node_hpp */
