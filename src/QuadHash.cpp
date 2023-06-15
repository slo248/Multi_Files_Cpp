#include "QuadHash.h"
#include <iostream>

QuadHash::QuadHash(int size):size(size)
{
    table=new int[size];
    for(int i=0; i<size; i++) table[i]=-1;
}

QuadHash::~QuadHash()
{
    delete[] table;
}

void QuadHash::add(int key)
{
    int pos=h1(key,size);
    for(int i=0; i<size; i++)
    {
        int id=(pos+i*i)%size;
        if(table[id]==-1)
        {
            table[id]=key;
            return;
        }
    }
}

void QuadHash::print()
{
    for(int i=0; i<size; i++) std::cout<<table[i]<<'\n';
}
