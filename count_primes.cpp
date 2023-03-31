int countPrimes(int n)
{
    vector<bool> vec(n + 1, true);

    for (long i = 2; i < n; i++)
    {
        if (vec[i])
        {
            for (long j = i * i; j < n; j += i)
            {
                vec[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (vec[i])
            count++;
    }
    return count;
}