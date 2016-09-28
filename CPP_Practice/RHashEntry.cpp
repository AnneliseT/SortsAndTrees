//
//  RHashEntry.cpp
//  CPP_Practice
//
// 
//

#include "RHashEntry.hpp"

RHashEntry::RHashEntry(int key, int value) {
    this->key = key;
    this->value = value;
    this->next = NULL;
}

//setters
void RHashEntry::setValue(int value) {
    this->value = value;
}

void RHashEntry::setNext(RHashEntry *next) {
    this->next = next;
}