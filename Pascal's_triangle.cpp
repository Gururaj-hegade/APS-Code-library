#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n)
{
    if (n == 1)
    {
        return {{1}};
    }
    vector<vector<int>> ans;
    ans.push_back({{1}});
    for (int i = 1; i < n; i++)
    {
        vector<int> vec(i + 1, 0);
        vec[0] = 1;
        vec[i] = 1;
        for (int j = 1; j < i; j++)
        {
            vec[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        ans.push_back(vec);
    }
    return ans;
    ;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans;
    ans = generate(n);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y;
        }
        cout << endl;
    }
    return 0;
}