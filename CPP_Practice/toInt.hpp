//
//  toInt.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/26/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#ifndef toInt_hpp
#define toInt_hpp

#include <stdio.h>
#include <stdlib.h>


//converts a character array to an integer.
int toInteger(const char *c);

//returns if a character is an integer by checking its HEX value.
bool isInteger(const char *c);

#endif /* toInt_hpp */
