int convert(char c)
{
    if (c == 'M')
        return (1000);
    else if (c == 'D')
        return (500);
    else if (c == 'C')
        return (100);
    else if (c == 'L')
        return (50);
    else if (c == 'X')
        return (10);
    else if (c == 'V')
        return (5);
    else if (c == 'I')
        return (1);
    else
        return (0);
}

int romanToInt(char * s)
{
    int output;
    
    output = 0;

    
    for (int i = 0; s[i] != 0; i++)
    {
        if (convert(s[i]) >= convert(s[i + 1]))
        {
            output = output + convert(s[i]);
        }
        else
        {
            output = output - convert(s[i]);
        }
    }
    return (output);
}