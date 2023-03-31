int firstBadVersion(int n)
{
    int ans = INT_MAX;
    int start = 0;
    int end = n;
    int mid;
    while (start <= end)
    {
        mid = (end - start) / 2 + start;
        if (isBadVersion(mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}