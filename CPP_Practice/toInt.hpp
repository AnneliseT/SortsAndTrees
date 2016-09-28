//
//  toInt.hpp
//  CPP_Practice
//
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
