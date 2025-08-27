#include <stdlib.h>
#include <stdio.h>

// Helper function to create a new string for a single word
static char *make_word(char *str, int len)
{
    char *word;
    int i = 0;

    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

// Main split function
char    **ft_split(char *str)
{
    char    **result;
    int     word_count = 0;
    int     i = 0;
    int     k = 0;

    // First, count the words to know how much memory to allocate
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            word_count++;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
    }

    // Allocate memory for the array of strings (+1 for the NULL terminator)
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);

    i = 0;
    while (str[i] && k < word_count)
    {
        int word_start = 0;
        int word_len = 0;

        // Skip leading whitespace
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;

        // Find the start of the next word
        word_start = i;

        // Find the end of the word to get its length
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        {
            word_len++;
            i++;
        }
        
        // Use the helper to create the word and add it to our array
        if (word_len > 0)
        {
            result[k] = make_word(&str[word_start], word_len);
            k++;
        }
    }
    // Add the final NULL to terminate the array of strings
    result[k] = NULL;
    return (result);
}
int main(void)
{
    char *test_string = "   Hello,   world! This is a test.   ";
    char **split_array;

    split_array = ft_split(test_string);

    if (split_array)
    {
        int i = 0;
        printf("Original string: '%s'\n", test_string);
        printf("Split words:\n");
        // Loop through the array until we hit the NULL terminator
        while (split_array[i] != NULL)
        {
            printf("  - '%s'\n", split_array[i]);
            i++;
        }

        // --- IMPORTANT: Freeing the memory ---
        i = 0;
        while (split_array[i] != NULL)
        {
            free(split_array[i]); // 1. Free each individual string
            i++;
        }
        free(split_array); // 2. Free the array that held the pointers
    }

    return (0);
}
