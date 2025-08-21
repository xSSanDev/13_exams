#include <stdio.h> // For the printf function

// The function to be solved
int occ_a(char *str)
{
    int count = 0;
    int i = 0;

    // Loop through the string until the null terminator is reached
    while (str[i] != '\0')
    {
        // If the current character is 'A', increment the counter
        if (str[i] == 'A')
        {
            count++;
        }
        i++;
    }
    return count;
}

// Main function for testing
int main(void)
{
    // Test cases
    char *str1 = "Hello World, I am a programmer."; // Should have 2 'a's
    char *str2 = "APPLE"; // Should have 1 'A'
    char *str3 = "Banana"; // Should have 0 'A's
    char *str4 = "AAAAA"; // Should have 5 'A's
    char *str5 = ""; // Empty string, should have 0 'A's

    printf("String: \"%s\"\nNumber of 'A's: %d\n\n", str1, occ_a(str1));
    printf("String: \"%s\"\nNumber of 'A's: %d\n\n", str2, occ_a(str2));
    printf("String: \"%s\"\nNumber of 'A's: %d\n\n", str3, occ_a(str3));
    printf("String: \"%s\"\nNumber of 'A's: %d\n\n", str4, occ_a(str4));
    printf("String: \"%s\"\nNumber of 'A's: %d\n\n", str5, occ_a(str5));

    return 0;
}

