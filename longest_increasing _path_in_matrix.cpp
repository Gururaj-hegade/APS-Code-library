int m, n;
int solve(vector<vector<int>> &grid, int i, int j, int temp, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;
    else if (i >= m || j >= n)
        return 0;
    if (temp >= grid[i][j])
        return 0;
    if (dp[i][j] != 0)
        return dp[i][j];
    int l = solve(grid, i, j - 1, grid[i][j], dp);
    int r = solve(grid, i, j + 1, grid[i][j], dp);
    int t = solve(grid, i - 1, j, grid[i][j], dp);
    int b = solve(grid, i + 1, j, grid[i][j], dp);
    return dp[i][j] = max({l, r, t, b}) + 1;
}
int longestIncreasingPath(vector<vector<int>> &matrix)
{
    m = matrix.size();
    n = matrix[0].size();
    int ans = 0;
    vector<vector<int>> dp(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = max(ans, solve(matrix, i, j, -1, dp));
        }
    }
    return ans;
}