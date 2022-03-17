int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2 * numsSize;
    
    int *output = (int *)malloc(sizeof(int) * numsSize * 2);
    
    for (int i = 0 ; i < numsSize ; i++)
    {
        output[i] = nums[i];
        output[i + numsSize] = nums[i];
    }
        
    return (output);
}