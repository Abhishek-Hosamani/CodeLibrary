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
int cnt = 0;
vector<int> ans;
void inorder(TreeNode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
}
int kthSmallest(TreeNode *root, int k)
{
    cnt = k;
    inorder(root);

    return ans[k - 1];
}
int main()
{

    return 0;
}