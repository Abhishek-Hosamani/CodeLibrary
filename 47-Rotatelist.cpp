#include <bits/stdc++.h>
using namespace std;
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;
    if (k == 0)
        return head;

    ListNode *cur = head;
    int cnt = 0;
    while (cur->next != NULL)
    {
        cnt++;
        cur = cur->next;
    }
    cnt++;
    k = k % cnt;
    if (k == 0)
        return head;
    if (cnt == k)
        return head;

    if (cnt - 1 == k)
    {
        cur->next = head;
        head = head->next;
        cur = cur->next;
        cur->next = NULL;

        return head;
    }

    int r = 0;
    cur = head;
    ListNode *temp = cur;
    ListNode *p = head;
    while (cur->next != NULL)
    {
        r++;
        if (r == (cnt - k))
        {
            temp = cur;
            p = temp->next;
        }

        cur = cur->next;
    }

    temp->next = NULL;
    cur->next = head;

    return p;
}
int main()
{

    return 0;
}