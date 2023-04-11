#include <bits/stdc++.h>
using namespace std;
ListNode *swapPairs(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *cur = head;
    ListNode *prev;

    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    prev = dummy;

    while (cur != NULL && cur->next != NULL)
    {
        prev->next = cur->next;
        cur->next = prev->next->next;
        prev->next->next = cur;
        prev = cur;
        cur = cur->next;
    }

    return dummy->next;
}
int main()
{

    return 0;
}