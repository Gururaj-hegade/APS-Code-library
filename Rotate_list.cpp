ListNode *rotateRight(ListNode *head, int k)
{
    int n = 0;
    if (head == NULL)
    {
        return head;
    }
    ListNode *temp;
    temp = head;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    if (n == 0)
    {
        return head;
    }
    k = k % n;
    cout << n;
    cout << k;
    while (k--)
    {
        ListNode *temp;
        temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next = head;
        head = temp->next;
        temp->next = NULL;
    }
    return head;
}