#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // The program should only run if there are exactly 3 arguments.
    // argv[0] is the program name.
    // argv[1] is the string.
    // argv[2] is the character to search for.
    // argv[3] is the character to replace with.
    if (argc == 4)
    {
        // Check that the search and replace arguments are single characters.
        // The characters are stored as strings of length 1, so the null
        // terminator must be the second character.
        if (argv[2][1] == '\0' && argv[3][1] == '\0')
        {
            // Loop through the input string.
            while (argv[1][i] != '\0')
            {
                // If the current character matches the search character,
                // print the replacement character.
                if (argv[1][i] == argv[2][0])
                {
                    write(1, &argv[3][0], 1);
                }
                // Otherwise, print the original character.
                else
                {
                    write(1, &argv[1][i], 1);
                }
                i++;
            }
        }
    }

    // Always print a newline at the end, as per the problem's requirements.
    write(1, "\n", 1);

    return 0;
}

