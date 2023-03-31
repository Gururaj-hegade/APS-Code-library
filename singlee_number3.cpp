vector<int> singleNumber(vector<int> &nums)
{
    map<int, int> mp;
    for (auto x : nums)
    {
        mp[x]++;
    }

    vector<int> ans;
    for (auto x : mp)
    {
        if (x.second == 1)
            ans.push_back(x.first);
    }
    cout << mp[0];
    return ans;
}