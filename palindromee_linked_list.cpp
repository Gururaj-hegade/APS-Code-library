bool solve(vector<int> &vec)
{
    int i = 0, j = vec.size() - 1;
    while (i <= j)
    {
        if (vec[i] != vec[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
bool isPalindrome(ListNode *head)
{
    vector<int> vec;
    while (head != NULL)
    {
        vec.push_back(head->val);
        head = head->next;
    }
    return solve(vec);
}