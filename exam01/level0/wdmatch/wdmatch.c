#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int matches = 0;

    // Check if there are exactly two arguments provided.
    if (argc == 3)
    {
        // Get the length of the first string to know how many matches are needed.
        int len_s1 = 0;
        while (argv[1][len_s1])
        {
            len_s1++;
        }

        // Loop through the second string to find the characters of the first string in order.
        while (argv[2][j] && argv[1][i])
        {
            // If a character in the second string matches the current character in the first string,
            // increment the index of the first string.
            if (argv[1][i] == argv[2][j])
            {
                i++;
                matches++;
            }
            j++;
        }

        // If the number of characters matched is equal to the length of the first string,
        // it means the first string can be formed from the second.
        if (matches == len_s1)
        {
            ft_putstr(argv[1]);
        }
    }
    // A newline is always printed, as specified in the problem.
    write(1, "\n", 1);

    return 0;
}

