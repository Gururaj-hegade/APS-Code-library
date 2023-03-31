int ans = 0;

int longestPalindrome(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    bool flag = 0;
    for (auto x : mp)
    {
        if ((x.second % 2) == 0)
        {
            ans += x.second;
        }
        else
        {
            if (x.second > 2)
                ans += x.second - 1;
            flag = 1;
        }
    }
    if (flag)
        ans += 1;
    return ans;
}