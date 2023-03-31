void solve(vector<vector<int>> &ans, vector<int> &temp, int ind, vector<int> nums)
{
    int n = nums.size();
    if (ind == n)
    {
        ans.push_back(temp);
        return;
    }
    solve(ans, temp, ind + 1, nums);
    int ele = nums[ind];
    temp.push_back(ele);
    solve(ans, temp, ind + 1, nums);
    temp.pop_back();
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int n = nums.size();
    solve(ans, temp, 0, nums);
    return ans;
}