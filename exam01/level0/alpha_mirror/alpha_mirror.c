#include <unistd.h>

void ft_alpha_mirror(char *str)
{
    int i = 0;
    
    // Loop through the input string character by character
    while (str[i] != '\0')
    {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // Calculate the mirrored character using the distance from 'a'
            // For example: 'a' is 0 positions from 'a', so 'z' - 0 = 'z'
            // 'b' is 1 position from 'a', so 'z' - 1 = 'y'
            write(1, &"zyxwvutsrqponmlkjihgfedcba"[str[i] - 'a'], 1);
        }
        // Check if the character is an uppercase letter
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // Calculate the mirrored character for uppercase letters
            write(1, &"ZYXWVUTSRQPONMLKJIHGFEDCBA"[str[i] - 'A'], 1);
        }
        // If the character is not an alphabetical character, print it as is
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    // Check if the number of arguments is exactly 2 (program name + 1 string)
    if (argc == 2)
    {
        ft_alpha_mirror(argv[1]);
    }

    // Always print a newline at the end
    write(1, "\n", 1);
    
    return 0;
}

