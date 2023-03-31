bool isPowerOfFour(int n)
{
    if (n == 1)
        return true;
    else if (n % 4 != 0)
        return 0;
    int num;
    while (n > 1)
    {
        num = n % 4;
        if (num % 4 != 0)
            return false;
        n = n / 4;
    }
    if (n == 1 && num == 0)
        return true;
    else
        return false;
}