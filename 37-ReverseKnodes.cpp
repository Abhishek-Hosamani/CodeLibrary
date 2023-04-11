#include <bits/stdc++.h>
using namespace std;

ListNode *reverseKGroup(ListNode *head, int k)
{
    stack<int> st;
    ListNode *cur = head;
    ListNode *prev = cur;
    int t = 1;
    while (cur != NULL)
    {
        if (t % (k + 1))
        {
            st.push(cur->val);
            cur = cur->next;
        }
        else
        {
            while (prev != cur)
            {
                if (!st.empty())
                {
                    prev->val = st.top();
                    st.pop();
                    prev = prev->next;
                }
            }
        }
        t++;
    }
    if (cur == NULL && !st.empty() && st.size() == k)
    {
        while (prev != cur)
        {
            if (!st.empty())
            {
                prev->val = st.top();
                st.pop();
                prev = prev->next;
            }
        }
    }
    return head;
}
int main()
{

    return 0;
}