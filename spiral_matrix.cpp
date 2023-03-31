vector<int> ans;
int row, col;
bool check(vector<vector<int>> &mat, int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    else if (i >= row || j >= col)
        return 0;
    else if (mat[i][j] == -101)
        return 0;
    else
        return 1;
}
void solve(vector<vector<int>> &mat, int i, int j)
{
    int dir = 0;
    while (ans.size() != row * col)
    {
        if (dir % 4 == 0)
        {
            while (check(mat, i, j))
            {
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
                j++;
            }
            i = i + 1;
            j = j - 1;
            dir++;
        }

        else if (dir % 4 == 1)
        {
            while (check(mat, i, j))
            {
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
                i++;
            }
            i = i - 1;
            j = j - 1;
            dir++;
        }
        else if (dir % 4 == 2)
        {
            while (check(mat, i, j))
            {
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
                j--;
            }
            i = i - 1;
            j = j + 1;
            dir++;
        }
        else if (dir % 4 == 3)
        {
            while (check(mat, i, j))
            {
                ans.push_back(mat[i][j]);
                mat[i][j] = -101;
                i--;
            }
            i = i + 1;
            j = j + 1;
            dir++;
        }
    }
}
vector<int> spiralOrder(vector<vector<int>> &mat)
{
    row = mat.size();
    col = mat[0].size();
    solve(mat, 0, 0);
    return ans;
}