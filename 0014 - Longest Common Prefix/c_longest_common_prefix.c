

char * longestCommonPrefix(char ** strs, int strsSize)
{
    if (strsSize == 1)
    {
        return (strs[0]);
    }
    char *output;
    
    output = (char *)malloc(sizeof(char) * 201);
    
    int i = 0;
    int j;
    
    while (strs[0][i] != '\0')
    {
        j = 1;
        while (j < strsSize && strs[j][i] == strs[0][i])
        {
            j++;
        }
        if (j == strsSize)
        {
            output[i] = strs[0][i];
        }
        else
        {
            break;
        }
        i++;
    }
    output[i] = '\0';
    return (output);
}