void dfs(int i, int j, vector<vector<char>> &board)
{
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != 'O')
        return;
    if (board[i][j] == 'O')
        board[i][j] = 'k';
    dfs(i + 1, j, board);
    dfs(i, j + 1, board);
    dfs(i - 1, j, board);
    dfs(i, j - 1, board);
}
void solve(vector<vector<char>> &board)
{
    int m = board.size();
    int n = board[0].size();
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                if (board[i][j] == 'O')
                {
                    dfs(i, j, board);
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'O')
            {
                board[i][j] = 'X';
            }
            if (board[i][j] == 'k')
            {
                board[i][j] = 'O';
            }
        }
    }
    return;
}