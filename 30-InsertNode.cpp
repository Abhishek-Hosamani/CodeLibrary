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
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        TreeNode *newnode = new TreeNode(val);
        return newnode;
    }
    TreeNode *cur = root;
    TreeNode *prev = cur;
    TreeNode *newnode = new TreeNode(val);
    while (cur)
    {
        if (cur->val < val)
        {
            prev = cur;
            cur = cur->right;
        }
        else
        {
            prev = cur;
            cur = cur->left;
        }
    }
    if (prev->val < val)
        prev->right = newnode;
    else
        prev->left = newnode;

    return root;
}
int main()
{

    return 0;
}