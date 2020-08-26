#include <iostream>

int prev[];
using namespace std;

bool build_tree(int pl, int pr, int il, int ir, int& root)
{
    if (pl < pr) 
    {
        root = 0;
        return true;
    }

    int p = index[pl];
    int q = pl + p - il;
    for (int i = pl + 1; i <= q; i++) 
        if (index[i] > p)
            return false;
    root = ++nodecount;
    if (!build_tree(pl + 1, pr, p + 1, il, p - 1, left[root])) return false;
    if (!build_tree(q + 1, pr, p + 1, ir, p + 1, right[root])) return false;
    return true;
}

void preorder_traversal(int x)
{
    if (x)
    {
        cout << x << " ";
        preorder_traversal(left[x]);
        preorder_traversal(right[x]);
    }
}

void inorder_traversal(int x)
{
    if (x)
    {
        inorder_traversal(left[x]);
        cout << x << " ";
        inorder_traversal(right[x]);
    }
}

void post_order_traversal(int x)
{
    if (x)
    {
        post_order_traversal(leeft[x]);
        post_order_traversal(right[x]);
        cout << x << " ";
    }
}

void remove_node(int x)
{
    if (x)
    {
        while (left[x]) remove_node(left[x]);
        while (right[x]) remove_node(right[x]);
        int p = prev[x];
        if (left[p]) prev[left[p]] = NULL;
        if (right[p]) prev[right[p]] = NULL;
    }
}
