#include <unistd.h>

// A small helper function to check if a character has already been seen
int is_duplicate(char *str, char c, int limit)
{
    int i = 0;
    while (i < limit)
    {
        if (str[i] == c)
        {
            return 1; // It's a duplicate
        }
        i++;
    }
    return 0; // Not a duplicate
}

void ft_union(char *s1, char *s2)
{
    int i = 0;

    // First, iterate through the first string and print unique characters.
    while (s1[i])
    {
        if (!is_duplicate(s1, s1[i], i))
        {
            write(1, &s1[i], 1);
        }
        i++;
    }

    // Reset the index and iterate through the second string.
    i = 0;
    while (s2[i])
    {
        // Check if the character from the second string is a duplicate in the first string.
        if (!is_duplicate(s1, s2[i], ft_strlen(s1)))
        {
            // If not, check if it's a duplicate within the second string itself
            // up to the current position.
            if (!is_duplicate(s2, s2[i], i))
            {
                write(1, &s2[i], 1);
            }
        }
        i++;
    }
}

// A simple strlen function is needed for the is_duplicate helper.
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return 0;
}

