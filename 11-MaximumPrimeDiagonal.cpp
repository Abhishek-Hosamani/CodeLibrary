#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int diagonalPrime(vector<vector<int>> &nums)
{

    int maxp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (isPrime(nums[i][i]))
        {
            if (maxp < nums[i][i])
                maxp = nums[i][i];
        }
        if (isPrime(nums[i][nums[i].size() - 1 - i]))
        {

            if (maxp < nums[i][nums[i].size() - 1 - i])
                maxp = nums[i][nums[i].size() - 1 - i];
        }
    }

    return maxp;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            temp.push_back(t);
        }
        nums.push_back(temp);
    }

    cout << diagonalPrime(nums) << endl;
    return 0;
}