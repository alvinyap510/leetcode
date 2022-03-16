#include <stdio.h>

int addDigits(int num)
{
    if (num < 10)
    {
        return (num);
    }
    else
    {
        while (num >= 10)
        {
            num = (num % 10) + addDigits(num / 10);
        }
        return (num);
    }  
}

int main(void)
{
    printf("%d", addDigits(38));
    return (0);
}