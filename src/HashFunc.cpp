#include "HashFunc.h"

int h1(int key, int size)
{
    return key%size;
}

int h2(int key, int size)
{
    return key%(size-1)+1;
}

int h12(int key, int size, int cnt)
{
    return (h1(key,size)+cnt*h2(key,size))%size;
}
