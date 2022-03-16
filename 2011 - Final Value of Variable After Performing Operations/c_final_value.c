

int finalValueAfterOperations(char ** operations, int operationsSize)
{
    int i;
    int x;
    
    i = 0;
    x = 0;
    
    while (i < operationsSize)
    {
        if (operations[i][1] == '+')
        {
            x++;
        }
        else if (operations[i][1] == '-')
        {
            x--;
        }
        i++;
    }
    return (x);

}