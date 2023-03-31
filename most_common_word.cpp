string mostCommonWord(string s, vector<string> &banned)
{

    int n = s.size();
    string ans;
    int count = 0;
    map<string, int> mp;
    int i = 0;
    while (i < n)
    {
        string temp = "";
        while (i < n && isalpha(s[i]))
        {
            temp.push_back(tolower(s[i]));
            i++;
        }
        if (temp != "")
        {
            mp[temp]++;
        }
        i++;
    }
    for (auto &x : banned)
    {
        mp.erase(x);
    }
    for (auto &x : mp)
    {
        if (count < x.second)
        {
            count = x.second;
            ans = x.first;
        }
    }
    return ans;
}