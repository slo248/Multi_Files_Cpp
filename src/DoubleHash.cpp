#include "DoubleHash.h"
#include <iostream>

DoubleHash::DoubleHash(int size):size(size)
{
    table=new int[size];
    for(int i=0; i<size; i++) table[i]=-1;
}

DoubleHash::~DoubleHash()
{
    delete[] table;
}

void DoubleHash::add(int key)
{
    int a=h1(key,size);
    int b=h2(key,size);
    // std::cout<<a<<' '<<b<<'\n';
    for(int i=0; i<size; i++)
    {
        int id=(a+i*b)%size;
        if(table[id]==-1)
        {
            table[id]=key;
            return;
        }
    }
}

void DoubleHash::print()
{
    for(int i=0; i<size; i++) std::cout<<table[i]<<'\n';
}
