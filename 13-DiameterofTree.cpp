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

int max(int a, int b)
{
    return a >= b ? a : b;
}
int maxDepth(TreeNode *root)
{
    int cnt = 0;
    if (root != NULL)
    {
        cnt = 1;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        cnt = max(cnt + l, cnt + r);
    }

    return cnt;
}

int main()
{

    return 0;
}