int m;
int numberOfArithmeticSlices(vector<int> &nums)
{
    m = nums.size();
    if (m < 3)
        return 0;
    int count = 0;
    for (int i = 0; i < m - 2; i++)
    {

        int diff = nums[i + 1] - nums[i];
        for (int j = i + 2; j < m; j++)
        {
            if (nums[j] - nums[j - 1] == diff)
                count++;
            else
                break;
        }
    }
    return count;
}