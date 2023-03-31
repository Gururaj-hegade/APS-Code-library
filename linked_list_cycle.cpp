bool hasCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 0;
    }
    if (head->next->next == NULL)
    {
        return 0;
    }
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        if (fast == slow)
        {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}