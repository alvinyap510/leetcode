#include <math.h>
#include <stdbool.h

bool isPowerOfFour(int n)
{
    int power;
    
    power = 0;
    
    if (n < 0)
        return (false);
    
    while (pow(4, power) < n)
        power++;
    
    if (pow(4, power) == n)
        return (true);
    else
        return (false);
}