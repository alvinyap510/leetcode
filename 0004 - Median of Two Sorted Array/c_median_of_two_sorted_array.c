#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int *merged_arr;
    int merged_size = nums1Size + nums2Size; 
    
    merged_arr = (int *)malloc(sizeof(int) * merged_size);
    
    int i = 0;
    int j = 0;
    int k = 0;

    while (j < nums1Size && k < nums2Size)
    {
        if (nums1[j] <= nums2[k])
        {
            merged_arr[i] = nums1[j];
            j++;
        }
        else
        {
            merged_arr[i] = nums2[k];
            k++;  
        }
        i++;
    }

    if (j == nums1Size)
    {
        while (k < nums2Size)
        {
            merged_arr[i] = nums2[k];
            k++;
            i++;
        }
    }
    else
    {
        while (j < nums1Size)
        {
            merged_arr[i] = nums1[j];
            j++;
            i++;
        }
    }
    
    double output;
    
    if (merged_size % 2 == 1)
    {
        output = (double)(merged_arr[merged_size / 2]);
    }
    else
    {
        output = ((double)merged_arr[(merged_size / 2)] + (double)(merged_arr[(merged_size / 2) - 1])) / 2;
    }
    return (output);
}

// int main(void)
// {
//     int array1[] = {1, 2, 3, 6, 7};
//     int array2[] = {3, 7, 9, 11, 18};

//     double ans = findMedianSortedArrays(array1, 5, array2, 5);
//     printf("%f", ans);

//     return (0);
// }