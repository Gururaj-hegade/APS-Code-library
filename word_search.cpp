#include <bits/stdc++.h>
using namespace std;

int m, n, len;
bool flag = 0;
bool solve(vector<vector<char>> &board, int i, int j, string &ans, string &word, vector<vector<int>> &visited)
{

    for (int k = 0; k < ans.size(); k++)
    {
        if (ans[k] != word[k])
            return 0;
        if (k == word.size() - 1)
            flag = 1;
    }

    if (ans.size() > len)
        return 0;
    if (i < 0 || j < 0)
        return false;
    else if (i >= m || j >= n)
        return 0;
    if (visited[i][j] == 1)
        return 0;
    visited[i][j] = 1;
    ans.push_back(board[i][j]);
    solve(board, i + 1, j, ans, word, visited);
    solve(board, i - 1, j, ans, word, visited);
    solve(board, i, j + 1, ans, word, visited);
    solve(board, i, j - 1, ans, word, visited);
    ans.pop_back();
    visited[i][j] = 0;
    if (flag == 1)
        return 1;
    else
        return 0;
}
bool exist(vector<vector<char>> &board, string word)
{
    m = board.size();
    n = board[0].size();
    len = word.size();
    string ans;

    bool flag = 0;
    vector<vector<int>> visited(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool p = (solve(board, i, j, ans, word, visited));
            if (p == 1)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<char>> board(row, vector<char>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> board[i][j];
        }
    }
    string word;
    cin >> word;
    if (exist(board, word))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}