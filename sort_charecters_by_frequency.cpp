static bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}
string frequencySort(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    vector<pair<char, int>> vec;
    for (auto x : mp)
    {
        vec.push_back(make_pair(x.first, x.second));
    }
    sort(vec.begin(), vec.end(), cmp);
    string ans;
    for (int i = 0; i < vec.size(); i++)
    {
        int j = vec[i].second;
        for (; j >= 1; j--)
        {
            ans.push_back(vec[i].first);
        }
    }
    return ans;
}