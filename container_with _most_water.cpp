int maxArea(vector<int> &nums)
{
    int prev = 0;
    int n = nums.size();
    int i = 0, j = n - 1;
    int ans = 0, s = n - 1;
    while (i < j)
    {
        ans = s * min(nums[i], nums[j]);
        ans = max(ans, prev);
        if (nums[i] < nums[j])
        {
            i++;
        }
        else
        {
            j--;
        }
        prev = ans;
        s--;
    }
    return ans;
}