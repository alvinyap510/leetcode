/**
 * @param {number[]} digits
 * @return {number[]}
 */
 var plusOne = function(digits) {
    let idx = digits.length - 1;
    
    digits[idx] += 1;
    for (let i = idx; i > 0 && digits[i] >= 10; i--) {
        digits[i] -= 10;
        digits[i-1] += 1;
    }
    
    if (digits[0] >= 10) {
        digits[0] -= 10;
        digits.unshift(1);
    }
    return digits;
};