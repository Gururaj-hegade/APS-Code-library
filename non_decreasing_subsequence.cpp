int m;
vector<vector<int>> ans;
void solve(vector<int> &nums, vector<int> &temp, int ind)
{
    int n = temp.size();

    if (ind >= m)
    {
        if (n <= 1)
            return;
        for (int i = 0; i < n - 1; i++)
            if (temp[i] > temp[i + 1])
                return;
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (temp[i] > temp[i + 1])
            return;
    }
    if (n > 1)
        ans.push_back(temp);

    solve(nums, temp, ind + 1);

    temp.push_back(nums[ind]);
    solve(nums, temp, ind + 1);
    temp.pop_back();
    return;
}
vector<vector<int>> findSubsequences(vector<int> &nums)
{
    m = nums.size();
    vector<int> temp;
    solve(nums, temp, 0);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}