#include <bits/stdc++.h>
using namespace std;
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    vector<int> ans;
    for (int i = 0; i < lists.size(); i++)
    {
        ListNode *c = lists[i];
        while (c != NULL)
        {
            ans.push_back(c->val);
            c = c->next;
        }
    }

    sort(ans.begin(), ans.end());
    ListNode *Cur = new ListNode();
    ListNode *H = Cur;
    for (int i = 0; i < ans.size(); i++)
    {
        ListNode *newnode = new ListNode(ans[i]);
        Cur->next = newnode;
        Cur = Cur->next;
    }

    return H->next;
}
int main()
{

    return 0;
}