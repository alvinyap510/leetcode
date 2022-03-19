import math

def isPalindrome(self, x):
        if x < 0:
            return False
        
        copy = x
        digits = 1
        
        while copy >= 10:
            copy /= 10
            digits += 1
        
        i = 0
        rev = 0
        front = digits - 1

        while i < digits / 2:
            if math.floor((x / pow(10, front)) % 10) == math.floor((x / pow(10, rev)) % 10):
                front -= 1
                rev += 1
                i += 1
            else:
                return False
            
        return True

        