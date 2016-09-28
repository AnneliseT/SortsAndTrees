//
//  LinkedHashMap.cpp
//  CPP_Practice
//
//  Source : http://www.algolist.net/Data_structures/Hash_table/Chaining
//

#include "LinkedHashMap.hpp"

const int TABLE_SIZE = 128;

//Constuctor
LHashMap::LHashMap() {
    table = new LinkedHashEntry*[TABLE_SIZE];
    for(int i = 0; i < TABLE_SIZE; i++)
        table[i] = NULL;
        

}

//Destructor
LHashMap::~LHashMap() {
    for (int i = 0; i < TABLE_SIZE; i++)
        if (table[i] != NULL) {
            LinkedHashEntry *prevEntry = NULL;
            LinkedHashEntry *entry = table[i];
            while (entry != NULL) {
                prevEntry = entry;
                entry = entry->Next();
                delete prevEntry;
            }
        }
    delete[] table;
}


//gets a value
int LHashMap::Get(int key) {
    int hash = key % TABLE_SIZE;
    if (table[hash] == NULL)
        return -1;
    else {
        LinkedHashEntry *entry = table[hash];
        //Linear probing
        while (entry != NULL && entry->Key() != key)
            entry = entry->Next();
        if (entry == NULL)
            return -1;
        else
            return entry->Value();
    }
}

//makes an entry into the table
void LHashMap::insert(int key, int value) {
    int hash = (key % TABLE_SIZE);
    if (table[hash] == NULL)
        table[hash] = new LinkedHashEntry(key, value);
    else {
        LinkedHashEntry *entry = table[hash];
        while (entry->Next() != NULL)
            entry = entry->Next();
        if (entry->Key() == key)
            entry->setValue(value);
        else
            entry->setNext(new LinkedHashEntry(key, value));
    }
}

//removes an entry from the table
void LHashMap::remove(int key) {
    int hash = (key % TABLE_SIZE);
    
    //if there is an entry at this location
    if (table[hash] != NULL) {
        LinkedHashEntry *prevEntry = NULL;
        LinkedHashEntry *entry = table[hash];
        
        //moves through the list of entries at the location until the correct key is found
        while (entry->Next() != NULL && entry->Key() != key) {
            prevEntry = entry;
            entry = entry->Next();
        }
        
        //if the correct entry is found
        if (entry->Key() == key) {
            
            //if you aren't between two entries
            if (prevEntry == NULL) {
                LinkedHashEntry *nextEntry = entry->Next();
                delete entry;
                table[hash] = nextEntry;
            } else {
                LinkedHashEntry *next = entry->Next();
                delete entry;
                prevEntry->setNext(next);
            }
        }
    }
}