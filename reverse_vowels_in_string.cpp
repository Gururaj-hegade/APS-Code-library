string reverseVowels(string s)
{
    set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');
    int len = s.size();
    int i = 0, j = len - 1;
    while (i <= j)
    {
        while (i < len && st.find(s[i]) == st.end())
        {
            cout << i << endl;
            i++;
        }
        while (j >= 0 && st.find(s[j]) == st.end())
        {
            j--;
        }
        /// cout<<s[i]<<s[j]<<endl;
        if (i > j)
        {
            break;
        }
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
    return s;
}