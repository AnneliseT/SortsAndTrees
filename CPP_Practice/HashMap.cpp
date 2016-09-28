//
//  HashMap.cpp
//  CPP_Practice
//
//So i don't like htis implementation because there is no real collision handling. It uses linear probing to find a new spot wich is fine but the linear probing onthe get funciton makes this very slow. it takes alot of energy.
//I don't particularly like chaining but that is going to be my next implementation.
//Then i want to tackle the resizing.


#include "HashMap.hpp"


const int Table_Size = 128;

HashMap::HashMap() {
    table = new HashEntry *[Table_Size];
    for (int i = 0; i<Table_Size; i++) {
        table[i] = NULL;
    }
}

HashMap::~HashMap() {
    for (int i = 0; i<Table_Size; i++)
        if (table[i] != NULL)
            delete table[i];
    delete[] table;
}

int HashMap::Get(int key) {
    int hash = key % Table_Size;
    while (table[hash] != NULL && table[hash]->Key() != key)
        hash = (hash + 1) % Table_Size;
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->Value();
}

void HashMap::Insert(int key, int value) {
    int count = 0;
    int hash = key % Table_Size;
    int limit = Table_Size - hash;
    while (table[hash] != NULL && table[hash]->Key() != key) {
        hash = (hash + 1) % Table_Size;
        count ++;
        if (count == limit)
            break;
    }
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new HashEntry(key,value);
    
}

