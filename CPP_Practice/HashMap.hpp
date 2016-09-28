//
//  HashMap.hpp
//  CPP_Practice
//
//

#ifndef HashMap_hpp
#define HashMap_hpp

#include <stdio.h>
#include "HashEntry.hpp"
#include <iostream>



class HashMap {
private:
    HashEntry **table;
public:
    HashMap();
    ~HashMap();
    
    void Insert(int key, int value);
    int Get(int key);
};

#endif /* HashMap_hpp */
