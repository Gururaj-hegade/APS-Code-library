int subarraySum(vector<int> &nums, int k)
{
    map<int, int> mp;
    int sum = 0, count = 0;
    mp[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        // cout<<"sum "<<sum<<endl;
        if (mp[sum - k] != 0)
        {
            count += mp[sum - k];
            // cout<<"sum got"<<sum-k<<endl;
        }
        mp[sum]++;
    }
    return count;
}