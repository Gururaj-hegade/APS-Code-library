string shiftingLetters(string s, vector<int> &shifts)
{
    int n = shifts.size();
    char a = 'a';
    int p = a;
    cout << p << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        shifts[i] = shifts[i] + (shifts[i + 1] % 26);
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = (s[i] - 'a' + shifts[i]) % 26 + 'a';
    }
    return s;
}