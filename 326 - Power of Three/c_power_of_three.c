bool isPowerOfThree(int n)
{
    int power;
    
    power = 0;
    if (n < 0)
        return (false);
    while (pow(3, power) < n)
        power++;
    if (pow(3, power) == n)
        return (true);
    else
        return (false);

}

