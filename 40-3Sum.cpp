#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    set<vector<int>> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;
        if (nums[i] > 0)
            break;
        while (l < r)
        {
            // if(nums[l]==nums[i])
            // {
            //     l++;
            // }
            // else
            // {
            if (nums[i] + nums[l] + nums[r] > 0)
                r--;
            else if (nums[i] + nums[l] + nums[r] < 0)
                l++;
            else
            {
                vector<int> r1;
                r1.push_back(nums[i]);
                r1.push_back(nums[l]);
                r1.push_back(nums[r]);
                res.insert(r1);
                l++;
                r--;
            }
            // }
        }
    }
    vector<vector<int>> ans;
    for (auto it : res)
    {
        ans.push_back(it);
    }

    return ans;
}
int main()
{

    return 0;
}