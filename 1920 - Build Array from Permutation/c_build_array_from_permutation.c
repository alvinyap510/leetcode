int* buildArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    
    int *output;
    output = malloc(sizeof(int) * numsSize);
    
    for (int i = 0; i < numsSize; i++)
    {
        output[i] = nums[nums[i]];
    }
    return (output);
}