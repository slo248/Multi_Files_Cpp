#include "BST.h"
#include <algorithm>

BST::BST()
{
    root=0;
}

BST::~BST()
{
    clear(root);
}

void BST::clear(Node *&p)
{
    if(!p) return;
    clear(p->pL);
    clear(p->pR);
    delete p;
    p=0;
}

void BST::add(Node *&p, int val)
{
    if(!p)
    {
        p=new Node(val);
        return;
    }

    if(val<p->val) add(p->pL,val);
    else add(p->pR,val);
}

int BST::getLCA(Node *p, int x, int y)
{
    if(!p) return -1;
    if(p->val==x) return x;
    if(p->val==y) return y;

    // case 1: x and y are in left subtree
    if(p->val>y) return getLCA(p->pL,x,y);

    // case 2: x and y are in right subtree
    if(p->val<x) return getLCA(p->pR,x,y);

    // case 3: x and y are in different subtrees
    return p->val;
}

void BST::remove(Node *&p, int val)
{
    if(!p) return;
    if(val<p->val) remove(p->pL,val);
    if(p->val<val) remove(p->pR,val);

    Node* del=p;

    if(p->pL && p->pR)
    {
        Node* cur=p->pL;
        while(cur->pR) cur=cur->pR;

        std::swap(p->val,cur->val);
        remove(cur,cur->val);
        return;
    }
    else if(p->pL) p=p->pL;
    else if(p->pR) p=p->pR;
    else p=0;

    delete del;
}

void BST::clear()
{
    clear(root);
}

void BST::add(int val)
{
    add(root,val);
}

int BST::getLCA(int x, int y)
{
    if(x>y) std::swap(x,y);
    return getLCA(root,x,y);
}

void BST::remove(int val)
{
    remove(root,val);
}
