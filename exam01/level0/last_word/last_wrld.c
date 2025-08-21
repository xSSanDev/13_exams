#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int found_word = 0;
    
    // Check if the number of arguments is exactly 2.
    if (argc == 2)
    {
        // Go to the end of the string.
        while (argv[1][i] != '\0')
        {
            i++;
        }
        i--;

        // Find the start of the last word.
        // First, skip any trailing spaces or tabs.
        while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i--;
        }
        
        // Now, find the beginning of the word.
        int end_of_word = i;
        while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            i--;
        }

        // Print the last word.
        int start_of_word = i + 1;
        while (start_of_word <= end_of_word)
        {
            write(1, &argv[1][start_of_word], 1);
            start_of_word++;
        }
    }

    // Always print a newline.
    write(1, "\n", 1);
    
    return 0;
}

