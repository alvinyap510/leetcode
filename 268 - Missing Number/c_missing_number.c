#include <stdio.h>

int missingNumber(int* nums, int numsSize)
{
    int i;
    int highest;
    int checker;
    
    highest = numsSize;
    checker = 0;
    
    while (checker < highest)
    {
        i = 0;
        while (checker != nums[i] && i < numsSize - 1)
        {
            i++;
        }
        if (checker != nums[i])
            return (checker);
        else
            checker++;
    }
    return (checker);
}

int main(void)
{
    int array[] = {0, 1, 6, 2, 4, 7, 3};

    printf("%d\n", missingNumber(array, 7));
}