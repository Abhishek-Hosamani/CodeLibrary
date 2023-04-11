#include <bits/stdc++.h>
using namespace std;
int minimizeArrayValue(vector<int> &nums)
{
    long long int ans = 0, sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans = max(ans, (sum + i) / (i + 1));
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    return 0;
}