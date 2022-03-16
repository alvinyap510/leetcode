int mySqrt(int x)
{
    int root;
    
    root = 1;
    
    if (x >= 46340 * 46340)
        return (46340);
    
    while (root * root <= x)
        root++;
    return (root - 1);
}