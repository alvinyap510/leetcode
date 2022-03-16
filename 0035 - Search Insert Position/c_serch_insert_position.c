

int searchInsert(int* nums, int numsSize, int target)
{
    int i;
    
    i = 0;
    
    if(target <= nums[i])
    {
        return (0);
    }
    else
    {
        while (i < numsSize - 1)
        {
            if (target >= nums[i] && target <= nums[i + 1])
            {
                return(i + 1);
            }
            i++;
        }
        return (numsSize);
    }
}