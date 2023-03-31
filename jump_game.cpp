int jump(vector<int> &nums)
{
    int n = nums.size();
    int far = 0;
    int jumps = 0;
    int cur = 0;
    for (int i = 0; i < n - 1; i++)
    {
        far = max(far, nums[i] + i);
        if (i == cur)
        {
            cur = far;
            jumps++;
        }
    }
    return jumps;
}