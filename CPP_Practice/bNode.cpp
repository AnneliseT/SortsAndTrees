//
//  bNode.cpp
//  CPP_Practice
//

#include "bNode.hpp"

bNode::bNode() {
    Lchild, Rchild, parent = NULL;
    value = 0;
}

bNode::bNode(double value) {
    Lchild, Rchild, parent = NULL;
    this->value = value;
}

