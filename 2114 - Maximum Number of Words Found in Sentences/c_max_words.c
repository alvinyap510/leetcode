

int mostWordsFound(char ** sentences, int sentencesSize)
{
    int i;
    int j;
    int max;
    int words;
    
    i = 0;
    max = 0;
    
    while (i < sentencesSize)
    {
        j = 0;
        words = 1;
        while(sentences[i][j] != '\0')
        {
            if (sentences[i][j] == ' ')
            {
                words++;
            }
            j++;
            
            if (words > max)
            {
                max = words;
            }
        }
        i++;
    }
    return (max);
}