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
void traverse(TreeNode *root)
{
    if (root != NULL)
    {
        traverse(root->left);
        ans.push_back(root->val);
        traverse(root->right);
    }
}
bool isValidBST(TreeNode *root)
{
    traverse(root);

    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] >= ans[i + 1])
            return false;
    }

    return true;
}
int main()
{

    return 0;
}