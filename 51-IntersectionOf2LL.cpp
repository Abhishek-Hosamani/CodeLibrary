#include <bits/stdc++.h>
using namespace std;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;
    unordered_map<ListNode *, int> mp;

    ListNode *cur = headA;
    while (cur != NULL)
    {
        mp[cur]++;
        cur = cur->next;
    }

    ListNode *cur2 = headB;
    while (cur2 != NULL)
    {
        if (mp[cur2] > 0)
        {
            return cur2;
        }
        cur2 = cur2->next;
    }

    return NULL;
}
int main()
{

    return 0;
}