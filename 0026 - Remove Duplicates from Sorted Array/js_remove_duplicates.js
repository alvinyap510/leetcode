/**
 * @param {number[]} nums
 * @return {number}
 */
 var removeDuplicates = function(nums) {
    
    let fixedLen = nums.length;
    
    for (let i = fixedLen; i >= 1; i--) {
        if(nums[i] === nums[i-1]) {
            nums.splice(i-1, 1);
            nums.push('_');
            fixedLen--;
        }
    }
    return fixedLen;
    
};