
int numIdenticalPairs(int* nums, int numsSize)
{
    int i;
    int j;
    int good_counter;
    
    i = 0;
    good_counter = 0;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] == nums[j])
                good_counter++;
            j++;
        }
        i++;
    }
    return (good_counter);
}