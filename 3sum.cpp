vector<vector<int>> threeSum(vector<int> &nums)
{
    int i, j, k;
    sort(nums.begin(), nums.end());
    set<vector<int>> s;

    vector<vector<int>> ans;
    vector<int> vec;
    int p = nums.size();
    if (p == 0 || p == 1 || p == 2)
    {
        return ans;
    }
    for (int i = 0; i < nums.size() - 2; i++)
    {
        j = i + 1;
        k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                vec.push_back(nums[i]);
                vec.push_back(nums[j]);
                vec.push_back(nums[k]);
                if (s.find(vec) == s.end())
                {
                    ans.push_back(vec);
                    s.insert(vec);
                }
                vec.clear();
                j++;
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
                k--;
        }
    }
    return ans;
}