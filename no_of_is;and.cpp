void dfs(vector<vector<char>> &g, int i, int j)
{
    if (i < 0 || i == g.size() || j < 0 || j == g[0].size())
        return;
    if (g[i][j] == '0')
        return;
    g[i][j] = '0';
    dfs(g, i + 1, j);
    dfs(g, i - 1, j);
    dfs(g, i, j + 1);
    dfs(g, i, j - 1);
}
int numIslands(vector<vector<char>> &g)
{
    int count = 0;
    for (int i = 0; i < g.size(); i++)
        for (int j = 0; j < g[0].size(); j++)
        {
            if (g[i][j] == '1')
            {
                dfs(g, i, j);
                ++count;
            }
        }
    return count;
}