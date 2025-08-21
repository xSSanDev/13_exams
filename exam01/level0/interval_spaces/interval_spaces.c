#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0; // Index for iterating through the string

    // Check if the number of arguments is exactly 2.
    // argv[0] is the program name, argv[1] is the first user argument.
    if (argc == 2)
    {
        // Loop through each character of the first argument provided by the user.
        // The loop continues until it reaches the null terminator '\0'.
        while (argv[1][i] != '\0')
        {
            // Print the current character.
            write(1, &argv[1][i], 1);

            // Check if the next character is not the null terminator.
            // This prevents printing extra spaces after the last character.
            if (argv[1][i + 1] != '\0')
            {
                // Print three spaces if it's not the last character.
                write(1, "   ", 3);
            }
            i++;
        }
    }

    // Print a newline character at the very end,
    // regardless of whether the arguments were correct.
    write(1, "\n", 1);
    return 0;
}

