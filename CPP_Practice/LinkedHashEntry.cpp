//
//  LinkedHashEntry.cpp
//  CPP_Practice
//
//

#include "LinkedHashEntry.hpp"

//constuctor
LinkedHashEntry::LinkedHashEntry(int key, int value) {
    this->key = key;
    this->value = value;
    this->next = NULL;
}

//setters
void LinkedHashEntry::setValue(int value) {
    this->value = value;
}

void LinkedHashEntry::setNext(LinkedHashEntry *next) {
    this->next = next;
}