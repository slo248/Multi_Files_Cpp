#ifndef LINEAR_HASH_H
#define LINEAR_HASH_H

#include "HashFunc.h"

class LinearHash
{
private:
    int size;
    int* table;

public:
    LinearHash(int size);
    ~LinearHash();

    void add(int key);
    void print();
    bool contains(int key);
};

#endif // LINEAR_HASH_H