#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> sum_indices;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                sum_indices.push_back(i);
                sum_indices.push_back(j);
                break;
            }
        }
    }
    return sum_indices;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    return 0;
}