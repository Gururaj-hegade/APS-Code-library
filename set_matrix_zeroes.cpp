void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (s1.find(i) != s1.end())
                matrix[i][j] = 0;
            else if (s2.find(j) != s2.end())
                matrix[i][j] = 0;
        }
    }
}