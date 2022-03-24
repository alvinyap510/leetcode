

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int *ret;
    ret = malloc(sizeof(int) * numsSize);
    
    int i;
    int j;
    int smaller;
    
    for (i = 0; i < numsSize; i++) 
    {
        smaller = 0;
        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                smaller++;
            }
        }
        ret[i] = smaller;
    }
    return ret;  
}