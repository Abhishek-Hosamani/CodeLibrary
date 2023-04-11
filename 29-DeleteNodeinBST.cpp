#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode *deleteNode(TreeNode *root, int key)
{
    if (root == NULL)
        return NULL;

    TreeNode *cur, *prev, *next, *succ;
    prev = NULL;
    cur = root;
    while (cur != NULL && cur->val != key)
    {
        prev = cur;
        if (cur->val < key)
        {
            cur = cur->right;
        }
        else
        {
            cur = cur->left;
        }
    }

    if (cur == NULL)
        return root;

    if (cur->left == NULL)
        next = cur->right;
    else if (cur->right == NULL)
        next = cur->left;
    else
    {
        succ = cur->right;
        while (succ->left != NULL)
            succ = succ->left;

        succ->left = cur->left;
        next = cur->right;
    }
    if (prev == NULL)
    {
        return next;
    }

    if (prev->left == cur)
    {
        prev->left = next;
    }
    else
    {
        prev->right = next;
    }
    // free(cur);
    return root;
}
int main()
{

    return 0;
}