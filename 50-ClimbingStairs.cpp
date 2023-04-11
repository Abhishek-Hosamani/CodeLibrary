#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    int arr[] = {1, 2};
    int temp = n + 1;
    int dparr[temp];

    for (int i = 0; i <= n; i++)
        dparr[i] = 0;
    dparr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i - arr[j] >= 0)
            {
                dparr[i] += dparr[i - arr[j]];
            }
        }
    }
    return dparr[n];
}
int main()
{

    return 0;
}