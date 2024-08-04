bool checkingPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    double root = sqrt(n);
    if (root == floor(root))
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
}
