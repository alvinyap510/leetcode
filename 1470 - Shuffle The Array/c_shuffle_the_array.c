/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    *returnSize = numsSize;
    
    int *ret = malloc(sizeof(int) * numsSize);
    
    int i;
    int j;
    
    for (i = 0, j = 0; i < n; i++, j += 2) 
    {
        ret[j] = nums[i];
        ret[j+1] = nums[i + n];
    }
    return ret;

}