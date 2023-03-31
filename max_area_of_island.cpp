int ans = 0;
int m, n;
int cur;
int area = 0;
int dfs(vector<vector<int>> &grid, int i, int j, int &area)
{
    if (i < 0 || j < 0)
        return 0;
    else if (i == m || j == n)
        return 0;
    else if (grid[i][j] == 0)
        return 0;
    area++;
    grid[i][j] = 0;
    dfs(grid, i + 1, j, area);
    dfs(grid, i - 1, j, area);
    dfs(grid, i, j + 1, area);
    dfs(grid, i, j - 1, area);
    return area;
}
int maxAreaOfIsland(vector<vector<int>> &grid)
{
    m = grid.size();
    n = grid[0].size();
    int cur = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            area = 0;
            if (grid[i][j] == 1)
            {
                cur = dfs(grid, i, j, area);
                ans = max(ans, cur);
            }
        }
    }
    return ans;
}