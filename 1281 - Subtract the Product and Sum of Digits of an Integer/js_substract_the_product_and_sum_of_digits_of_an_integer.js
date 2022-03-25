/**
 * @param {number} n
 * @return {number}
 */
 var subtractProductAndSum = function(n) 
 {
     let array = [];
     
     while (n >= 10) {
         array.push(n % 10);
         n = Math.floor(n / 10);
     }
     array.push(n);
     
     let sumAll = 0;
     let productAll = 1;
     
     for (let i = 0; i < array.length; i++) {
         sumAll = sumAll + array[i];
         productAll = productAll * array[i];
     }
     
     return productAll - sumAll;
     
 };