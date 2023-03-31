int row, col;
bool check(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    else if (i >= row || j >= col)
        return 0;
    return 1;
}
void update(vector<vector<int>> &b, vector<vector<int>> &mat, int i, int j)
{
    vector<int> vec1 = {0, 1, 1, 1, 0, -1, -1, -1};
    vector<int> vec2 = {1, 1, 0, -1, -1, -1, 0, 1};
    int count = 0;
    for (int k = 0; k < 8; k++)
    {
        if (check(i + vec1[k], j + vec2[k]))
        {
            if (b[i + vec1[k]][j + vec2[k]] == 1)
                count++;
        }
    }

    if (b[i][j] == 1)
    {

        if (count == 2 || count == 3)
            mat[i][j] = 1;
        else if (count < 2 || count > 3)
            mat[i][j] = 0;
    }
    else if (b[i][j] == 0)
    {
        if (count == 3)
            mat[i][j] = 1;
        else
            mat[i][j] = 0;
    }
}
void gameOfLife(vector<vector<int>> &b)
{
    row = b.size();
    col = b[0].size();
    vector<vector<int>> mat(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            update(b, mat, i, j);
        }
    }

    b = mat;
}