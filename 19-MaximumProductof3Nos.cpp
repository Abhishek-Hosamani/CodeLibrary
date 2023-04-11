#include <bits/stdc++.h>
using namespace std;
long long max(int a, int b)
{
    return a > b ? a : b;
}
int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    long long ans = max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums{0, n};
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maximumProduct(nums) << endl;
    return 0;
}