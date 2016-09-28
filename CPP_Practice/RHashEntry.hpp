//
//  RHashEntry.hpp
//  CPP_Practice
//
//

#ifndef RHashEntry_hpp
#define RHashEntry_hpp

#include <stdio.h>

class RHashEntry {
private:
    int key;
    int value;
    RHashEntry *next;
    
public:
    //constuctor
    RHashEntry(int key, int value);
    
    //setters
    void setValue(int value);
    void setNext(RHashEntry *next);
    
    //getters
    int Key() {return key;}
    int Value() {return value;}
    RHashEntry *Next() {return next;}
};

#endif /* RHashEntry_hpp */
