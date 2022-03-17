int* runningSum(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    
    int *output = malloc(sizeof(int) * numsSize);
    
    for (int i = numsSize - 1; i >= 0; i--)
    {
        output[i] = 0;
        for (int j = i; j >= 0; j--)
        {
            output[i] = output[i] + nums[j];
        }
    }
    return (output);
}