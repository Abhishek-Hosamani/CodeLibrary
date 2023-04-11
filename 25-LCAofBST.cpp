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
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root->val > p->val && root->val < q->val)
    {
        return root;
    }
    TreeNode *cur = root;
    while (cur != NULL)
    {
        if (cur->val > p->val && cur->val > q->val)
        {
            cur = cur->left;
        }
        else if (cur->val < p->val && cur->val < q->val)
        {
            cur = cur->right;
        }
        else if (cur->val == p->val || cur->val == q->val)
        {
            return cur;
        }
        else
        {
            return cur;
        }
    }

    return NULL;
}
int main()
{

    return 0;
}