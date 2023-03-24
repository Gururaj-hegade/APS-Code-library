#include <bits/stdc++.h>
using namespace std;
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp2, *temp1;
    temp1 = new ListNode();
    temp1->next = head;
    temp2 = head;
    for (int i = 1; i <= n; ++i)
    {
        temp1 = temp1->next;
    }
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp2->next = temp2->next->next;
    return temp2->next;
}
