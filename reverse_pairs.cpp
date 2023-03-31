void merge(vector<int> &arr, int low, int mid, int high, int &cnt)
{
    int i = low, j = mid + 1;
    int r = j;
    int c = 0;
    vector<int> v;
    while (i <= mid)
    {
        while (r <= high and arr[i] > (long long)2 * arr[r])
        {
            c++;
            r++;
        }
        cnt += c;

        while (j <= high and arr[j] <= arr[i])
            v.push_back(arr[j++]);
        v.push_back(arr[i++]);
    }
    while (j <= high)
        v.push_back(arr[j++]);
    for (int i = low; i <= high; i++)
        arr[i] = v[i - low];
}

void mergesort(vector<int> &arr, int low, int high, int &cnt)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergesort(arr, low, mid, cnt);
        mergesort(arr, mid + 1, high, cnt);
        merge(arr, low, mid, high, cnt);
    }
}
int reversePairs(vector<int> &arr)
{
    // merge sort -> modified merge function
    int cnt = 0;
    int n = arr.size();
    mergesort(arr, 0, n - 1, cnt);
    if (n <= 1 or cnt == 0)
        return 0;
    return cnt;
}