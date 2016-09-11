//
//  node.cpp
//  CPP_Practice
//

#include "node.hpp"


Node::Node() {
    parent, Lchild, Rchild = NULL;
    value = 0;
    h = 1;
}

Node::Node(double value) {
    parent, Lchild, Rchild = NULL;
    this->value = value;
    h=1;
}


