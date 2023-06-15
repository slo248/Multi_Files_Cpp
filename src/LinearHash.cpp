#include "LinearHash.h"
#include <iostream>

LinearHash::LinearHash(int size):size(size)
{
    table=new int[size];
    for(int i=0; i<size; i++) table[i]=-1;
}

LinearHash::~LinearHash()
{
    delete[] table;
}

void LinearHash::add(int key)
{
    int pos=h1(key,size);
    for(int i=0; i<size; i++)
    {
        int id=(pos+i)%size;
        if(table[id]==-1)
        {
            table[id]=key;
            return;
        }
    }
}

void LinearHash::print()
{
    for(int i=0; i<size; i++) std::cout<<table[i]<<'\n';
}
