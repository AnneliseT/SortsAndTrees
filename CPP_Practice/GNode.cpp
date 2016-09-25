//
//  GNode.cpp
//  CPP_Practice
//
//

#include "GNode.hpp"

GNode::GNode() {
    parent, next = NULL;
    dest = 0;
}

GNode::GNode(double dest) {
    parent, next = NULL;
    this->dest = dest;
}