#include <unistd.h>

// This function takes a string and reverses the case of all its letters.
// It is the core logic from your selected code.
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

int main(int argc, char *argv[])
{
    // The problem requires a program that displays the result.
    // The swap_cases function modifies the string in place, so we
    // need to print the modified string after calling the function.
    int i = 0;

    // Check if the number of arguments is exactly 2 (program name + one string).
    if (argc == 2)
    {
        // Call the swap_cases function to modify the argument string in place.
        swap_cases(argv[1]);

        // Now, iterate through the modified string and print each character.
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    // Always display a newline at the end.
    write(1, "\n", 1);
    
    return 0;
}

