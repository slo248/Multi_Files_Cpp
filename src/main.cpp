#include "DoubleHash.h"
#include <iostream>
using namespace std;

int main()
{
    freopen(".inp","r",stdin);
    freopen(".out","w",stdout);

    int n, m; cin>>n>>m;
    DoubleHash ht(m);
    while(n--)
    {
        int x; cin>>x;
        ht.add(x);
    }

    ht.print();
    return 0;
}