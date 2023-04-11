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
TreeNode *bstFromPreorder(vector<int> &preorder)
{
    TreeNode *root = new TreeNode(preorder[0]);

    for (int i = 1; i < preorder.size(); i++)
    {
        TreeNode *newnode = new TreeNode(preorder[i]);
        TreeNode *cur = root;
        TreeNode *prev = NULL;
        while (cur)
        {
            prev = cur;
            if (cur->val > preorder[i])
                cur = cur->left;
            else
                cur = cur->right;
        }
        if (prev->val > preorder[i])
        {
            prev->left = newnode;
        }
        else
            prev->right = newnode;
    }

    return root;
}
int main()
{

    return 0;
}