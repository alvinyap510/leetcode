/**
 * @param {string} s
 * @return {number}
 */
 var myAtoi = function(s) {
    if (!parseInt(s)) {
        
        return 0;
    }
    
    let num = parseInt(s);
    
    if (num < -(Math.pow(2,31))) {
        
        return -(Math.pow(2,31))
        
    } else if (num > Math.pow(2,31) - 1) {
        
        return Math.pow(2,31) - 1;
        
    }
    
    return num;
};