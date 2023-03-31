int solve(vector<int> &cost, int i, int n, vector<int> &dp)
{
    if (i == n - 1 || i == n - 2)
    {
        return cost[i];
    }
    if (dp[i] != -1)
        return dp[i];
    dp[i] = cost[i] + min(solve(cost, i + 1, n, dp), solve(cost, i + 2, n, dp));
    return dp[i];
}
int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    vector<int> dp(n + 1, -1);

    return min(solve(cost, 0, n, dp), solve(cost, 1, n, dp));
}