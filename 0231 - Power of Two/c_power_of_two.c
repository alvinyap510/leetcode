#include <stdbool.h>
#include <math.h>

bool isPowerOfTwo(int n)
{
    int power;
    
    power = 0;
    while (pow(2, power) < n)
        power++;
    if (pow(2, power) == n)
        return (true);
    else
        return (false);
}