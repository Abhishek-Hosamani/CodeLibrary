#include <bits/stdc++.h>
using namespace std;
int maxi(int a, int b)
{
    return (a > b) ? a : b;
}
int maximumCostSubstring(string s, string chars, vector<int> &vals)
{

    int globalmax = 0;
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        auto itr = find(chars.begin(), chars.end(), s[i]);
        if (itr != chars.end())
        {
            int ind = itr - chars.begin();
            max = max + vals[ind];
            if (max < 0)
                max = 0;
        }
        else
        {
            int temp = s[i] - 'a' + 1;
            max = max + temp;
        }
        globalmax = maxi(globalmax, max);
    }

    return globalmax;
}
int main()
{

    return 0;
}