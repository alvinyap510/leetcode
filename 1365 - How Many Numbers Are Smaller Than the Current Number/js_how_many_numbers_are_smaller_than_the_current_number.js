/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var smallerNumbersThanCurrent = function(nums) {
    let ret = [];
    let smaller;
    
    for (let i = 0; i < nums.length; i++) {
        smaller = 0;
        for (let j = 0; j < nums.length; j++) {
            if (nums[i] > nums[j] && i != j) {
                smaller++;
            }
        }
        ret.push(smaller);
    }
    return ret;
};