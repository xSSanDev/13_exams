#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // Check if the number of arguments is exactly 2.
    if (argc == 2)
    {
        // Loop through the string provided as the first argument.
        while (argv[1][i] != '\0')
        {
            // Check if the current index `i` is an even number.
            // The modulo operator (%) returns the remainder of a division.
            // If i % 2 == 0, it means i is a multiple of 2.
            if (i % 2 == 0)
            {
                // If the index is even, write the character at that index.
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }

    // Always print a newline at the end.
    write(1, "\n", 1);
    
    return 0;
}

