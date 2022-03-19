#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return (false);
    }
    
    int copy = x;
    int digits = 1;
    
    while (copy >= 10)
    {
        copy = copy / 10;
        digits++;
    }
    
    int i;
    int j;
    
    for (i = 0, j = digits - 1; i < digits / 2; i++, j--)
    {
        int front   = ( x / (int)pow(10, j) ) % 10;
        int back    = ( x / (int)pow(10, i) ) % 10;
        if (front != back)
        {
            return (false);
        }
    }
    return (true);
}