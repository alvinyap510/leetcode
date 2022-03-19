/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
 var findMedianSortedArrays = function(nums1, nums2) {
    let arr_length = nums1.length + nums2.length;
    let arr = [];
    let median;
    
    let i;
    let j;
    
    for (i = 0, j = 0; i < nums1.length, j < nums2.length; ) {
        if (nums1[i] <= nums2[j]) {
            arr.push(nums1[i]);
            i++;
        } else {
            arr.push(nums2[j]);
            j++;
        }
    }
    if (i == nums1.length) {
        while (j < nums2.length) {
            arr.push(nums2[j]);
            j++;
        }
    } else {
        while (i < nums1.length) {
            arr.push(nums1[i]);
            i++;
        }
    }
    
    if (arr_length % 2 == 0) {
        median = (arr[arr_length / 2] + arr[(arr_length / 2) - 1]) / 2;
    } else {
        median = (arr[Math.floor(arr_length / 2)]);
    }
    return median;
};