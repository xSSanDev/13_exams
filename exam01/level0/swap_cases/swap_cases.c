#include <unistd.h>

char *swap_cases(char *str)
{
    int i = 0;

    // Loop through the entire string
    while (str[i] != '\0')
    {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // Convert to uppercase by subtracting the difference in ASCII values
            str[i] -= 32;
        }
        // Check if the character is an uppercase letter
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // Convert to lowercase by adding the difference in ASCII values
            str[i] += 32;
        }
        i++;
    }
    return str;
}

