vector<string> subdomainVisits(vector<string> &cpd)
{
    int n = cpd.size();
    map<string, int> mp;
    for (auto x : cpd)
    {
        string p = "";
        int i = 0;
        int len = x.size();
        while (i < len)
        {
            while (i < x.size() && isdigit(x[i]))
            {
                p.push_back(x[i]);
                i++;
            }
            int rep = stoi(p);
            if (x[i] == ' ')
            {
                i++;
                continue;
            }
            else
            {
                string sub = x.substr(i);
                cout << sub << endl;
                mp[sub] = mp[sub] + rep;
                while (i < len && x[i] != '.')
                {
                    i++;
                }
            }
            i++;
        }
    }
    vector<string> ans;
    string temp = "";
    for (auto x : mp)
    {
        temp = to_string(x.second) + " " + x.first;
        // cout<<x.first<<" "<<x.second<<endl;
        ans.push_back(temp);
    }
    return ans;
    ;
}