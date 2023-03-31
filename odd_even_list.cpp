ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL)
        return NULL;
    ListNode *o = new ListNode(0);
    ListNode *e = new ListNode(0);

    ListNode *odd = o;
    ListNode *even = e;
    int count = 1;
    while (head != NULL)
    {
        if (count % 2 == 0)
        {
            even->next = head;
            even = even->next;
        }
        else
        {
            odd->next = head;
            odd = odd->next;
        }
        head = head->next;
        count++;
    }

    // cout<<even->val;
    even->next = NULL;
    odd->next = e->next;
    return o->next;
}