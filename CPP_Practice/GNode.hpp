//
//  GNode.hpp
//  CPP_Practice
//
//

#ifndef GNode_hpp
#define GNode_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class GNode{
private:
    GNode *next;
    GNode *parent;
    double dest;
public:
    //Constructors
    GNode();
    GNode(double dest);
    
    //Setters
    void SetNext (GNode *n) {next = n;}
    void SetParent(GNode *p) {parent = p;}
    void SetDest(double dest) {this->dest = dest;}
    
    //Getters
    GNode *Next() {return next;}
    GNode *Parent() {return parent;}
    double getDest() {return dest;}
    
};


#endif /* GNode_hpp */
