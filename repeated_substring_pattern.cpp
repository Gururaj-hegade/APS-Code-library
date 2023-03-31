bool check(string s, string t, int n, int start, int size)
{
    while (start < n)
    {
        string k = s.substr(start, t.size());
        if (k != t)
        {
            return false;
        }
        start += t.size();
    }
    return true;
}
bool repeatedSubstringPattern(string s)
{
    set<string> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string t = s.substr(0, i + 1);
        string p = s.substr(i + 1, t.size());
        if (t == p)
        {
            if (check(s, t, n, t.size() + p.size(), t.size()))
            {
                return true;
            }
        }
        // cout<<t<<" "<<p<<endl;
    }
    return false;
    ;
}