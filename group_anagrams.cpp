
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;
    vector<vector<string>> ans;
    string temp;
    for (auto x : strs)
    {
        temp = x;
        sort(temp.begin(), temp.end());
        mp[temp].push_back(x);
    }
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }
    return ans;
}