/**
 * @param {number[]} nums
 * @return {number}
 */
 var firstMissingPositive = function(nums) {
    
    if (nums.indexOf(1) === -1) {
        return 1;
    }
    
    nums.sort(function (a, b) {return a - b});

    for (let i = 0; i < nums.length - 1; i++) {
        if (nums[i + 1] != nums[i] + 1 && nums[i] + 1 >= 1 && !(nums[i + 1] == nums[i])) {
            return nums[i] + 1;
        }
    }
    return nums[nums.length - 1] + 1;
};
