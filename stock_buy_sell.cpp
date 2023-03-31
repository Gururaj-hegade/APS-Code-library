int solve(vector<int> &nums, int ind, int len, int buy, int count)
{
    if (ind >= len)
    {
        return count;
    }
    if (nums[ind] - buy > count)
    {
        count = nums[ind] - buy;
    }
    int ans = solve(nums, ind + 1, len, buy, count);
    return max(ans, count);
}
int maxProfit(vector<int> &prices)
{
    if (prices.size() == 0)
        return 0;
    int maxProfit = INT_MIN;
    int buy = prices[0];
    set<int> st;
    for (int i = 0; i < prices.size(); i++)
    {

        if (prices[i] > buy)
        {
            continue;
        }
        if (st.find(prices[i]) != st.end())
        {
            continue;
        }
        for (int j = i + 1; j < prices.size(); j++)
        {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        buy = prices[i];
        st.insert(prices[i]);
    }
    return maxProfit < 0 ? 0 : maxProfit;
    /*int len=nums.size();
    int count=0,ans=0;
    int mini=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>mini){
            continue;
        }
        count=solve(nums,i+1,len,nums[i],0);
        ans=max(ans,count);
        mini=nums[i];
    }
    return ans;*/
}