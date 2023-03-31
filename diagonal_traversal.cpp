int flag = 0;
bool check(int i, int j, vector<vector<int>> &mat)
{
    if (i < 0 || j < 0)
        return false;
    else if (i >= mat.size() || j >= mat[0].size())
        return false;
    return true;
}
vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();
    vector<int> ans;
    int i = 0, j = 0;
    while (ans.size() != row * col)
    {
        if (flag % 2 == 0)
        {
            while (check(i, j, mat))
            {
                ans.push_back(mat[i][j]);
                i = i - 1;
                j = j + 1;
            }
            if (j == mat[0].size())
            {
                i = i + 2;
                j = j - 1;
            }
            else
                i = i + 1;
        }
        else if (flag % 2 == 1)
        {
            while (check(i, j, mat))
            {
                ans.push_back(mat[i][j]);
                i = i + 1;
                j = j - 1;
            }
            if (i == mat.size())
            {
                j = j + 2;
                i = i - 1;
            }
            else
            {
                j = j + 1;
            }
        }
        flag++;
    }
    return ans;
}