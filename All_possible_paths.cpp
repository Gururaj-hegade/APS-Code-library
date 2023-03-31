void solve(vector<vector<int>> &graph, int node, vector<int> &temp, vector<vector<int>> &ans)
{
    temp.push_back(node);
    for (int x : graph[node])
    {
        if (x == graph.size() - 1)
        {
            temp.push_back(x);
            ans.push_back(temp);
            temp.pop_back();
        }
        solve(graph, x, temp, ans);
        temp.pop_back();
    }
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(graph, 0, temp, ans);
    return ans;
}