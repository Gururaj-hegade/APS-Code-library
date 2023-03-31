string solve(string s)
{
    string ans = s;
    ans += "1";
    cout << ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
    reverse(s.begin(), s.end());
    return ans + s;
}
char findKthBit(int n, int k)
{
    string s = "0";
    // cout<<s<<endl;
    for (int i = 1; i < n; i++)
    {
        s = solve(s);
    }
    return s[k - 1];
}