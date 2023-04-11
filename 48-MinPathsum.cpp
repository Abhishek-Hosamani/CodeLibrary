#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>> &grid)
{
    if (grid.size() * grid[0].size() == 1)
        return grid[0][0];

    int ans = grid[0][0];
    for (int i = 1; i < grid[0].size(); i++)
    {
        grid[0][i] += ans;
        ans = grid[0][i];
    }
    if (grid.size() == 1)
        return ans;
    ans = grid[0][0];
    for (int i = 1; i < grid.size(); i++)
    {
        grid[i][0] += ans;
        ans = grid[i][0];
    }
    int temp = 0;
    for (int i = 1; i < grid.size(); i++)
    {
        for (int j = 1; j < grid[i].size(); j++)
        {
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
            temp = grid[i][j];
        }
    }

    // int m=grid[0].size();
    // int n=grid.size();

    // return grid[m-1][n-1];

    return temp;
}
int main()
{

    return 0;
}