

ListNode *reverseBetween(ListNode *head, int left, int right)
{
    ListNode *previous, *prev, *temp, *cur;
    int count = 1;
    if (left == right)
        return head;
    if (head->next == NULL)
        return head;

    previous = head;
    temp = head->next;
    while (left != 1 && count != left - 1)
    {
        previous = temp;
        temp = temp->next;
        count++;
    }

    prev = previous;
    while (count != right)
    {
        cur = temp->next;
        temp->next = prev;
        prev = temp;
        temp = cur;
        count++;
    }

    if (left == 1)
    {
        previous->next->next = previous;
        previous->next = temp;
        return prev;
    }
    previous->next->next = temp;
    previous->next = prev;

    return head;
}