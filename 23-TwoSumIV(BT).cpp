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
void inorder(TreeNode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
}
bool findTarget(TreeNode *root, int k)
{
    inorder(root);
    int left = 0;
    int right = ans.size() - 1;

    while (left < right)
    {
        if (ans[left] + ans[right] == k)
        {
            return true;
        }
        else if (ans[left] + ans[right] < k)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}
int main()
{

    return 0;
}