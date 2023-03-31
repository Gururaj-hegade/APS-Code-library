int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (auto x : nums)
    {
        pq.push(x);
    }
    int i = 0;
    while (i < k - 1)
    {
        pq.pop();
        i++;
    }
    return pq.top();
}

