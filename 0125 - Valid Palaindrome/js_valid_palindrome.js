/**
 * @param {string} s
 * @return {boolean}
 */
 var isPalindrome = function(s) {
    let splitted = s.toLowerCase().split("");
    let ret = [];
    let regex = /[A-Za-z0-9]/;
    
    for (let i = 0; i < splitted.length; i++) {
        if (regex.test(splitted[i]) === true) {
            ret.push(splitted[i]);
        }
    }
    
    let rev = ret.length - 1;

    for (let i = 0; i < ret.length / 2; i++, rev--) {
        if (ret[i] !== ret[rev]) {
            return false;
        }
    }
    return true;
};

isPalindrome("A man, a plan, a canal: Panama");