

int lengthOfLastWord(char * s)
{
    int i;
    
    i = 0;
    
    while (s[i] != '\0')
    {
        i++;
    }
    
    int rev;
    
    rev = i - 1;
    
    while (s[rev] == ' ')
    {
        rev--;
    }
    
    int count;
    
    count = 0;
    
    while ((s[rev] >= 'a' && s[rev] <= 'z')
          || (s[rev] >= 'A' && s[rev] <= 'Z'))
    {
        rev--;
        count++;
    }
    return (count);
}

#include <stdio.h>
int main(void)
{
    char *string = "movdzsvon";

    printf("%i\n", lengthOfLastWord(string));
    printf("%i", (2^2));
    return (0);
}