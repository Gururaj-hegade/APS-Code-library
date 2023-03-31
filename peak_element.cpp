int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return 0;
    int i;
    bool flag = 0;
    if (n == 2)
    {
        if (nums[0] > nums[1])
            return 0;
        else
            return 1;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[i - 1])
            flag = 1;
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            return i;
    }
    if (!flag)
        return 0;
    return i;
}