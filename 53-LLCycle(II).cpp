#include <bits/stdc++.h>
using namespace std;
ListNode *detectCycle(ListNode *head)
{
    set<ListNode *> st;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    ListNode *cur = head;
    while (cur != NULL)
    {
        auto it = st.find(cur);
        if (it != st.end())
        {
            return cur;
        }

        st.insert(cur);
        cur = cur->next;
    }

    return NULL;
}
int main()
{

    return 0;
}