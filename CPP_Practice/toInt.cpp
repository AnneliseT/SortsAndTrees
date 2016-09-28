//
//  toInt.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/26/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#include "toInt.hpp"



//The function returns true if the char fed to it is a integer, else it returns false. This is done by checking the HEX value of the char.
bool isInteger(const char *c) {
    bool x = false;
    if ((*c == 0x30) || (*c == 0x31) || (*c == 0x32) ||
        (*c == 0x33) || (*c == 0x34) || (*c == 0x35) ||
        (*c == 0x36) || (*c == 0x37) || (*c == 0x38) ||
        (*c == 0x39))
        x = true;
    return x;
}

//This function moves through the character array of the integer and while it is not at the end, builds the integer and returns it at the end.
int toInteger(const char *c) {
    int value = 0;
    int sign = 1;
    
    //checks to see if there is a plus or minus sign at the beginning of the char array and adjusts the sign if needed.
    if( *c == '+' || *c == '-' ) {
        if( *c == '-' ) sign = -1;
            c++;
    }
    
    //loops through the chars and checks if they are an int. While the integers continue to exist it converts the char to an int and joins them together.
    while (isInteger( c ) ) {
        value *= 10;
        value += (int) (*c-'0');
        c++;
    }
    
    //makes sure the sign is correct and returns the value.
    return value * sign;
}

