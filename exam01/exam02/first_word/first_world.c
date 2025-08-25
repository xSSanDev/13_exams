#include <unistd.h>

int main(int argc, char *argv[])
{
    // Step 1: Check the number of arguments.
    if (argc == 2)
    {
        int i = 0;

        // Step 2: Skip any leading spaces and tabs.
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }

        // Step 3: Print the characters of the first word.
        while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++; // Don't forget to move to the next character!
        }
    }

    // Final Step: Always print a newline at the very end.
    write(1, "\n", 1);

    return (0);
}
