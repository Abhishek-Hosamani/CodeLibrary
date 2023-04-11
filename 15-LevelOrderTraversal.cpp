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

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<TreeNode *> q;
    vector<int> res;
    res.push_back(root->val);
    ans.push_back(res);
    if (root->left)
        q.push(root->left);
    if (root->right)
        q.push(root->right);

    while (q.size())
    {
        queue<TreeNode *> s;
        vector<int> t;
        while (!q.empty())
        {
            TreeNode *cur = q.front();
            t.push_back(cur->val);
            if (cur->left)
            {
                s.push(cur->left);
            }
            if (cur->right)
            {
                s.push(cur->right);
            }
            q.pop();
        }
        ans.push_back(t);
        q = s;
    }

    return ans;
}
int main()
{

    return 0;
}