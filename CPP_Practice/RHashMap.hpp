//
//  RHashMap.hpp
//  CPP_Practice
//  Source : http://www.algolist.net/Data_structures/Hash_table/Dynamic_resizing
//

#ifndef RHashMap_hpp
#define RHashMap_hpp

#include <stdio.h>
#include "RHashEntry.hpp"


class RHashMap {
private:
    float threshold;
    int maxSize;
    int tableSize;
    int size;
    RHashEntry **table;
    
    void resize();
    
public:
    RHashMap();
    ~RHashMap();
    
    void setThreshold(float threshold);
    void insert(int key, int value);
    void remove(int key);
    
    int Get(int key);
    
};

#endif /* RHashMap_hpp */
