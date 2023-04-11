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
vector<int> ans;
void preorder(TreeNode *root)
{
    if (root != NULL)
    {
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
}
vector<int> preorderTraversal(TreeNode *root)
{
    preorder(root);

    return ans;
}
int main()
{

    return 0;
}