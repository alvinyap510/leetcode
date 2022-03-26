/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
 var isMatch = function(s, p) {
  
    let temp = p.split("");
    temp.unshift("^");
    temp.push("$");
    temp = temp.join("");
  
    let regex = new RegExp(temp);
    
    return regex.test(s);
};