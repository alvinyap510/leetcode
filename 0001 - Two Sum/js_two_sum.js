/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var twoSum = function(nums, target) {
    let i;
    let j;
    let arr = [];
    
    for (i = 0; i < nums.length - 1; i++) {
        for (j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] == target) {
                arr.push(i);
                arr.push(j);
                return arr;
            }
        }
    }
    return arr;
};