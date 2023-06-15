#ifndef BST_H
#define BST_H

class BST
{
private:
    struct Node
    {
        int val;
        Node* pL, *pR;
        Node(int val):val(val),pL(0),pR(0){}
    };

    Node* root;

    void clear(Node* &p);
    void add(Node* &p, int val);
    int getLCA(Node* p, int x, int y);
    void remove(Node* &p, int val);

public:
    BST();
    ~BST();

    void clear();
    void add(int val);
    int getLCA(int x, int y);
    void remove(int val);
};

#endif // BST_H