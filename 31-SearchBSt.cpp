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
TreeNode *searchBST(TreeNode *root, int val)
{
    if (root == NULL)
        return NULL;
    TreeNode *cur = root;

    while (cur != NULL)
    {
        if (cur->val > val)
            cur = cur->left;
        else if (cur->val < val)
        {
            cur = cur->right;
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