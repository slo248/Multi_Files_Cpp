#ifndef QUAD_HASH_H
#define QUAD_HASH_H

#include "HashFunc.h"

class QuadHash
{
private:
    int size;
    int* table;

public:
    QuadHash(int size);
    ~QuadHash();

    void add(int key);
    void print();
};

#endif // QUAD_HASH_H