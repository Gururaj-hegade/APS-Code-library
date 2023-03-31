int maxSubArray(vector<int> &nums)
{
    int i, j;
    int sum = 0, ans = INT_MIN;
    for (i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        ans = max(sum, ans);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return ans;
}