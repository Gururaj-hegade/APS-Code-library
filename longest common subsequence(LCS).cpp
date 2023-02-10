#include <bits/stdc++.h>
using namespace std;
int LCS(string text1,string text2){
    int m = text1.size();
    int n = text2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (text1[i - 1] == text2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}
int main()
{
    string text1, text2;
    cin >> text1;
    cin >> text2;
    int ans=LCS(text1,text2);
    cout<<ans<<endl;
    return 0;
}
