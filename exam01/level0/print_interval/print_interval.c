#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // The problem requires exactly one argument after the program name,
    // which means argc should be 2.
    if (argc == 2)
    {
        // This loop iterates through the characters of the provided string.
        while (argv[1][i] != '\0')
        {
            // Check if the current index is a multiple of 3.
            // The modulo operator (%) returns the remainder of a division.
            // If i % 3 == 0, it means i is a multiple of 3.
            if (i % 3 == 0)
            {
                write(1, "5", 1);
            }
            // If it's not a multiple of 3, check if it's a multiple of 5.
            else if (i % 5 == 0)
            {
                write(1, "3", 1);
            }
            // If the index is not a multiple of 3 or 5,
            // the original character is printed.
            else
            {
                write(1, &argv[1][i], 1);
            }
            
            i++; // Increment the index to move to the next character.
        }
    }

    // A newline is printed at the end of the program regardless of the number of arguments.
    write(1, "\n", 1);

    return 0;
}

