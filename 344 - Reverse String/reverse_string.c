void reverseString(char* s, int sSize)
{
    int i;
    int rev;
    char temp;
    
    i = 0;
    rev = sSize - 1;
    
    while (i < (sSize / 2))
    {
        temp = s[i];
        s[i] = s[rev];
        s[rev] = temp;
        i++;
        rev--;
    }
}