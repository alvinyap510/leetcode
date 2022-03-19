bool isPalindrome(int x)
{
    double reversed = 0;
    int temp = x;
    
    if(x<0)
        return false;

    while(temp){
        reversed *= 10;
        reversed += temp%10;
        temp = temp/10;
    }

    return reversed == x;
}