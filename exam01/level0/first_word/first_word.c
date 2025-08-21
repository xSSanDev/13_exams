#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // Check for exactly two arguments (program name + one string)
    // or if the string itself is empty.
    if (argc == 2)
    {
        // Skip any leading whitespace characters (spaces or tabs).
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }

        // Print characters until a whitespace or the end of the string is reached.
        while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }

    // Always print a newline at the end.
    write(1, "\n", 1);
    
    return 0;
}

