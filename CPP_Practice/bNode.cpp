//
//  bNode.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/10/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#include "bNode.hpp"

bNode::bNode() {
    Lchild, Rchild, parent = NULL;
    value = 0;
    h = 0;
}

bNode::bNode(double value) {
    Lchild, Rchild, parent = NULL;
    this->value = value;
    h = 0;
}

