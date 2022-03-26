/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(x) {
         
    let neg = false;
    if (x < 0) {
        neg = true;
        x = -x;
    }
    let str = x.toString().split("").reverse().join("");
    let ans = parseInt(str);
    
    if (neg) {
        ans = -ans;
    }
    if (ans < -Math.pow(2, 31) || ans > Math.pow(2,31) - 1) {
        ans = 0;
    }
    
    return ans;
};