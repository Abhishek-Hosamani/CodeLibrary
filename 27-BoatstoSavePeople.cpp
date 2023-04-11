#include <bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int> &people, int limit)
{
    int left = 0;
    int right = people.size() - 1;
    sort(people.begin(), people.end());
    int boat = 0;
    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
        {
            left++;
        }
        right--;

        boat++;
    }

    return boat;
}
int main()
{
    int n, limit;
    cin >> n >> limit;
    vector<int> nums{0, n};
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << numRescueBoats(nums, limit) << endl;
    return 0;
}