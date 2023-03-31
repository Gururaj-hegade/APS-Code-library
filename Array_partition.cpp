int arrayPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i = 0, ans = 0;
    int p;
    for (i = 0; i < nums.size();)
    {
        ans += nums[i];
        i += 2;
    }
    return ans;
}