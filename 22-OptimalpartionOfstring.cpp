#include <bits/stdc++.h>
using namespace std;
int partitionString(string s)
{
    vector<int> hashmap(26, 0);
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (hashmap[s[i] - 'a'] == 0)
        {
            hashmap[s[i] - 'a'] = 1;
        }
        else
        {
            cnt++;
            while (j < i)
            {
                hashmap[s[j] - 'a'] = 0;
                j++;
            }

            i--;
        }
    }
    cnt = cnt + 1;

    return cnt;
}
int main()
{
    string s;
    cin >> s;
    cout << partitionString(s);
    return 0;
}