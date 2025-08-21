#include <unistd.h>

void inter(char *s1, char *s2)
{
    int i = 0;
    int j;
    int k;

    // Iterate through the first string (s1)
    while (s1[i] != '\0')
    {
        j = 0;
        // For each character in s1, check if it exists in s2
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                // If a match is found, check for duplicates in the part of s1 already processed
                k = 0;
                while (s1[k] != s1[i])
                {
                    k++;
                }
                // If the character is not a duplicate, print it
                if (k == i)
                {
                    write(1, &s1[i], 1);
                }
                break;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        inter(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return 0;
}

