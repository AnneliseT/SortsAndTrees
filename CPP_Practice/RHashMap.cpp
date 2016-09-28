//
//  RHashMap.cpp
//  CPP_Practice
//

#include "RHashMap.hpp"

const int DEFAULT_TABLE_SIZE = 128;

//Constructor
RHashMap::RHashMap() {
    threshold = 0.75f;
    maxSize = 96;
    tableSize = DEFAULT_TABLE_SIZE;
    size = 0;
    table = new RHashEntry*[tableSize];
    for (int i = 0; i < tableSize; i++)
        table[i] = NULL;
}

//Dstructor
RHashMap::~RHashMap() {
    for (int hash = 0; hash < tableSize; hash++)
        if (table[hash] != NULL) {
            RHashEntry *prevEntry = NULL;
            RHashEntry *entry = table[hash];
            while (entry != NULL) {
                prevEntry = entry;
                entry = entry->Next();
                delete prevEntry;
            }
        }
    delete[] table;
}

//Private resize function that increases the size of the table when its size has reached the threshold
void RHashMap::resize() {
    int oldTableSize = tableSize;
    tableSize *= 2;
    maxSize = (int) (tableSize * threshold);
    RHashEntry **oldTable = table;
    table = new RHashEntry*[tableSize];
    for (int i = 0; i < tableSize; i++)
        table[i] = NULL;
    size = 0;
    for (int hash = 0; hash < oldTableSize; hash++)
        if (oldTable[hash] != NULL) {
            RHashEntry *oldEntry;
            RHashEntry *entry = oldTable[hash];
            while (entry != NULL) {
                insert(entry->Key(), entry->Value());
                oldEntry = entry;
                entry = entry->Next();
                delete oldEntry;
            }
        }
    delete[] oldTable;
}

//This sets the treshold
void RHashMap::setThreshold(float threshold) {
    this->threshold = threshold;
    maxSize = (int) (tableSize * threshold);
}


//Makes an entry in the table
void RHashMap::insert(int key, int value) {
    int hash = (key % tableSize);
    if (table[hash] == NULL) {
        table[hash] = new RHashEntry(key, value);
        size++;
    } else {
        RHashEntry *entry = table[hash];
        while (entry->Next() != NULL)
            entry = entry->Next();
        if (entry->Key() == key)
            entry->setValue(value);
        else {
            entry->setNext(new RHashEntry(key, value));
            size++;
        }
    }
    if (size >= maxSize)
        resize();
}

//removes an entry from the table
void RHashMap::remove(int key) {
    int hash = (key % tableSize);
    if (table[hash] != NULL) {
        RHashEntry *prevEntry = NULL;
        RHashEntry *entry = table[hash];
        while (entry->Next() != NULL && entry->Key() != key) {
            prevEntry = entry;
            entry = entry->Next();
        }
        if (entry->Key() == key) {
            if (prevEntry == NULL) {
                RHashEntry *nextEntry = entry->Next();
                delete entry;
                table[hash] = nextEntry;
            } else {
                RHashEntry *next = entry->Next();
                delete entry;
                prevEntry->setNext(next);
            }
            size--;
        }
    }
}

//returns a value from the table that is found using the key passed into the function
int RHashMap::Get(int key) {
    int hash = (key % tableSize);
    if (table[hash] == NULL)
        return -1;
    else {
        RHashEntry *entry = table[hash];
        while (entry != NULL && entry->Key() != key)
            entry = entry->Next();
        if (entry == NULL)
            return -1;
        else
            return entry->Value();
    }
}
