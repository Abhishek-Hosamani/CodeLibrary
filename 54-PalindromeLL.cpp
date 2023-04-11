#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(ListNode *head)
{
    if (head->next == NULL)
        return true;
    vector<int> vec;
    ListNode *cur = head;
    while (cur != NULL)
    {
        vec.emplace_back(cur->val);
        cur = cur->next;
    }
    int l = vec.size();
    for (int i = 0; i < l / 2; i++)
    {

        if (vec[i] != vec[l - 1 - i])
            return false;
    }

    return true;
}
int main()
{

    return 0;
}