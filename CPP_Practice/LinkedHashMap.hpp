//
//  LinkedHashMap.hpp
//  CPP_Practice
//
//

#ifndef LinkedHashMap_hpp
#define LinkedHashMap_hpp

#include <stdio.h>
#include "LinkedHashEntry.hpp"

class LHashMap {
private:
    LinkedHashEntry **table;
public:
    //Constructor and Desctructor
    LHashMap();
    ~LHashMap();
    
    int Get(int key);
    void insert(int key, int value);
    void remove(int key);
    
    
};

#endif /* LinkedHashMap_hpp */
