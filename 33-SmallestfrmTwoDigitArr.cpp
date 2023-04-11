#include <bits/stdc++.h>
using namespace std;
int minNumber(vector<int> &nums1, vector<int> &nums2)
{
    set<int> st;
    int m = -1;
    for (int i = 0; i < nums1.size(); i++)
        st.insert(nums1[i]);
    for (int i = 0; i < nums2.size(); i++)
        st.insert(nums2[i]);
    if (st.size() == (nums1.size() + nums2.size()))
    {
        int min1 = *min_element(nums1.begin(), nums1.end());
        int min2 = *min_element(nums2.begin(), nums2.end());
        if (min1 < min2)
        {
            return min1 * 10 + min2;
        }
        else
        {
            return min2 * 10 + min1;
        }
    }

    else
    {
        for (int i = 1; i <= 9; i++)
        {
            auto itr = find(nums1.begin(), nums1.end(), i);
            auto itr2 = find(nums2.begin(), nums2.end(), i);
            if (itr != nums1.end() && itr2 != nums2.end())
            {
                m = *itr;
                break;
            }
        }
    }
    return m;
}
int main()
{

    return 0;
}