 var isPalindrome = function(x) {
    
    if (x < 0) 
    {
        return (false)
    }
    
    let copy = x;
    let digits = 1;
    
    while (copy >= 10)
    {
        copy = copy / 10;
        digits += 1;
    }
    
    let i = 0;
    let rev = 0;
    
    while (i < digits) 
    {
        if (Math.floor((x / Math.pow(10, digits - 1)) % 10) == Math.floor((x / Math.pow(10, rev)) % 10))
        {
            i++;
            digits--;
            rev++;
        }
        else 
        {
            return (false);
        }
        
    }
    return (true);
};