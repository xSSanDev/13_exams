#include <unistd.h>
int has_seen_before(char *string, int position, char character_to_check)
{
	int i = 0;
	while(i < position)
	{
		if(string[i] == character_to_check)
		{
			return (1);
		}
		i++;
	}
	return(0);
}
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int i = 0;
        int j = 0;

        // 1. Loop through the first string
        while (argv[1][i] != '\0')
        {
            // If the character is not a duplicate in the part we've already checked...
            if (has_seen_before(argv[1], i, argv[1][i]) == 0)
            {
                // ...then print it.
                write(1, &argv[1][i], 1);
            }
            i++;
        }

        // 2. Loop through the second string
        while (argv[2][j] != '\0')
        {
            // Check if the char appeared ANYWHERE in the first string
            // AND if it appeared earlier in the second string.
            if (has_seen_before(argv[1], i, argv[2][j]) == 0 && has_seen_before(argv[2], j, argv[2][j]) == 0)
            {
                write(1, &argv[2][j], 1);
            }
            j++;
        }
    }

    // 3. Always print a newline
    write(1, "\n", 1);
    return (0);
}
