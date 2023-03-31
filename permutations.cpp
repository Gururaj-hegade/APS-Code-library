void solve(vector<vector<int>> &ans, vector<int> nums, int i)
{
    int n = nums.size();
    if (i >= n)
    {
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(nums[i], nums[j]);
        solve(ans, nums, i + 1);
        swap(nums[i], nums[j]);
    }
    return;
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int n = nums.size();
    solve(ans, nums, 0);
    return ans;
}