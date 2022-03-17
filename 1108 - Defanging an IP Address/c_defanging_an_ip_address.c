#include <string.h>

char * defangIPaddr(char * address)
{   
    char *output = malloc(sizeof(char) * (strlen(address) + 7));
    
    int i;
    int j = 0;
    
    for (i = 0; address[i] != 0; i++)
    {
        if (address[i] != '.')
        {
            output[j] = address[i];
            j++;
        }
        else
        {
            output[j] = '[';
            output[j + 1] = '.';
            output[j + 2] = ']';
            j = j + 3;
        }
    }
    output[j] = 0;
    return (output);
}