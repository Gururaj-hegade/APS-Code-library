#include <bits/stdc++.h>
using namespace std;
int longestValidParentheses(string s)
{
    int n = s.size();
    int count = 0, ans = 0;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            count = i - st.top();
            ans = max(ans, count);
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    if (longestValidParentheses(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}