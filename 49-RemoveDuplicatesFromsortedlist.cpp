#include <bits/stdc++.h>
using namespace std;
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    map<int, int> mpp;
    ListNode *cur = head;
    ListNode *prev;
    while (cur != NULL)
    {
        mpp[cur->val]++;
        cur = cur->next;
    }
    cur = head;
    prev = head;
    cur = cur->next;
    while (cur != NULL)
    {
        if (mpp[cur->val] >= 2)
        {
            cur = cur->next;
        }
        else
        {
            prev->next = cur;
            cur = cur->next;
            prev = prev->next;
        }
    }
    prev->next = NULL;
    if (mpp[head->val] >= 2)
    {
        head = head->next;
    }

    return head;
}
int main()
{

    return 0;
}