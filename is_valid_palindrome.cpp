#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string t = "";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]) || (s[i] - '0' >= 0 && s[i] - '0' <= 9))
        {
            t.push_back(tolower(s[i]));
        }
    }
    string p = t;
    reverse(t.begin(), t.end());
    return t == p;
}
int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}