ListNode *partition(ListNode *head, int x)
{
    ListNode *l = new ListNode(0);
    ListNode *r = new ListNode(0);

    ListNode *lt = l;
    ListNode *rt = r;

    while (head != NULL)
    {
        if (head->val < x)
        {
            lt->next = head;
            lt = lt->next;
        }
        else
        {
            rt->next = head;
            rt = rt->next;
        }
        head = head->next;
    }
    lt->next = r->next;
    rt->next = NULL;

    return l->next;
}