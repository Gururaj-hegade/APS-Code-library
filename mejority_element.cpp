int majorityElement(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    int n = nums.size();
    for (auto x : mp)
    {
        if (x.second > (n / 2))
            return x.first;
    }
    return 0;
}