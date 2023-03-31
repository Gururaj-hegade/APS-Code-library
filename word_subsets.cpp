vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
{
    vector<int> freq(26, 0);
    for (auto x : words2)
    {
        vector<int> temp(26, 0);
        for (auto i : x)
        {
            temp[i - 'a']++;
            freq[i - 'a'] = max(temp[i - 'a'], freq[i - 'a']);
        }
    }

    vector<string> ans;
    for (auto x : words1)
    {
        vector<int> temp(26, 0);
        for (auto y : x)
            temp[y - 'a']++;
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > temp[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans.push_back(x);
    }

    return ans;
}