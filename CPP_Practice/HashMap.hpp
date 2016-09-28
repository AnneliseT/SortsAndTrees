//
//  HashMap.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/28/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
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
