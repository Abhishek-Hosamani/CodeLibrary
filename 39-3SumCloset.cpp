#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int closesum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r)
        {
            int cur = nums[i] + nums[l] + nums[r];
            if (cur == target)
            {
                return cur;
            }
            if (abs(target - cur) < abs(target - closesum))
            {
                closesum = cur;
            }
            if (target < cur)
                r--;
            else
            {
                l++;
            }
        }
    }

    return closesum;
}
int main()
{

    return 0;
}