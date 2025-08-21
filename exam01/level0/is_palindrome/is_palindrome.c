#include <unistd.h>

// Helper function to get the length of a string
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

// Helper function to print a string
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int is_palindrome(char *str)
{
    int len = ft_strlen(str);
    int start = 0;
    int end = len - 1;

    // A single character or empty string is a palindrome
    if (len <= 1)
        return 1;

    // Compare characters from the beginning and end of the string
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main(int argc, char **argv)
{
    // Check if the number of arguments is exactly 2 (program name + 1 string)
    if (argc == 2)
    {
        if (is_palindrome(argv[1]))
        {
            ft_putstr(argv[1]);
        }
    }
    // Print a newline regardless of whether the string was a palindrome or
    // if the number of arguments was incorrect.
    write(1, "\n", 1);
    
    return 0;
}

