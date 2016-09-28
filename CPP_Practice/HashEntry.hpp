//
//  HashEntry.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/28/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#ifndef HashEntry_hpp
#define HashEntry_hpp

#include <stdio.h>

class HashEntry {
private:
    int key;
    int value;
public:
    HashEntry (int key, int value);
    int Key() {return key;}
    int Value() {return value;}
};

#endif /* HashEntry_hpp */
