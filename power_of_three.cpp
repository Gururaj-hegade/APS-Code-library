bool isPowerOfThree(int num)
{
    if (num == 1)
        return true;
    if (num < 3)
        return false;
    if (num % 3 != 0)
        return false;
    int n;
    while (num > 0)
    {
        num = num / 3;
        // cout<<num<<endl;
        if (num % 3 != 0 && num != 1)
            return false;
    }
    return true;
}