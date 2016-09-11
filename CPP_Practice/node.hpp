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
    double h;
public:
    Node();
    Node(double value);
    void SetLchild(Node *l) {Lchild = l;}
    void SetRchild(Node *r) {Rchild = r;}
    void SetParent(Node *p) {parent = p;}
    void SetHeight(double height) {h = height;}
    void SetValue(double value) {this->value = value;}
    double height() {return h;}
    Node *Left() {return Lchild;}
    Node *Right() {return Rchild;}
    Node *Parent() {return parent;}
    double getValue() {return value;}
    
};

#endif /* node_hpp */
