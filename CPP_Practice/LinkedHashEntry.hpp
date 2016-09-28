//
//  LinkedHashEntry.hpp
//  CPP_Practice
//
//

#ifndef LinkedHashEntry_hpp
#define LinkedHashEntry_hpp

#include <stdio.h>

class LinkedHashEntry {
private:
    int key;
    int value;
    LinkedHashEntry *next;
    
public:
    //constuctor
    LinkedHashEntry(int key, int value);
    
    //setters
    void setValue(int value);
    void setNext(LinkedHashEntry *next);
    
    //getters
    int Key() {return key;}
    int Value() {return value;}
    LinkedHashEntry *Next() {return next;}
};

#endif /* LinkedHashEntry_hpp */
