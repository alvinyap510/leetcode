

char * intToRoman(int num)
{
    char *output = malloc(sizeof(char) * 20);
    
    int i = 0;
    
    while (num >= 1000)
    {
        output[i] = 'M';
        num = num - 1000;
        i++;
    }
    while (num >= 900)
    {
        output[i] = 'C';
        output[i+1] = 'M';
        num = num - 900;
        i = i + 2;
    }
    while (num >= 500)
    {
        output[i] = 'D';
        num = num - 500;
        i++;
    }
    while (num >= 400)
    {
        output[i] = 'C';
        output[i+1] = 'D';
        num = num - 400;
        i = i + 2;
    }
    while (num >= 100)
    {
        output[i] = 'C';
        num = num - 100;
        i++;
    }
    while (num >= 90)
    {
        output[i] = 'X';
        output[i+1] = 'C';
        num = num - 90;
        i = i + 2;
    }
    while (num >= 50)
    {
        output[i] = 'L';
        num = num - 50;
        i++;
    }
    while (num >= 40)
    {
        output[i] = 'X';
        output[i+1] = 'L';
        num = num - 40;
        i = i + 2;
    }
    while (num >= 10)
    {
        output[i] = 'X';
        num = num - 10;
        i++;
    }
    while (num >= 9)
    {
        output[i] = 'I';
        output[i+1] = 'X';
        num = num - 9;
        i = i + 2;
    }
    while (num >= 5)
    {
        output[i] = 'V';
        num = num - 5;
        i++;
    }
    while (num >= 4)
    {
        output[i] = 'I';
        output[i+1] = 'V';
        num = num - 4;
        i = i + 2;
    }
    while (num > 0)
    {
        output[i] = 'I';
        num = num - 1;
        i++;
    }
    output[i] = '\0'; 
    return (output);
}