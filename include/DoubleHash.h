#ifndef DOUBLE_HASH_H
#define DOUBLE_HASH_H

#include "HashFunc.h"

class DoubleHash
{
private:
    int size;
    int* table;

public:
    DoubleHash(int size);
    ~DoubleHash();

    void add(int key);
    void print();
};

#endif // DOUBLE_HASH_H