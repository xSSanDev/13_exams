#include <stdio.h>
int count_words(char *str)
{
    int i = 0;
    int count = 0;

    // Loop through the string until the end
    while (str[i] != '\0')
    {
        // Check if the current char is the start of a new word
        if ((str[i] != ' ' && str[i] != '\t') &&
            (i == 0 || str[i-1] == ' ' || str[i-1] == '\t'))
        {
            count++;
        }
        i++;
    }
    return (count);
}
