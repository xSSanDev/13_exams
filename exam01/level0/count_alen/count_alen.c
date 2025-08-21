#include <stdio.h> // Required for printf
#include <unistd.h>

// Assuming the ft_putstr function is also available for testing
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

// The function to be tested
int count_alen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            return i;
        }
        i++;
    }
    return i;
}

int main(void)
{
    char *str1 = "hello world";
    char *str2 = "apple";
    char *str3 = "banana";
    char *str4 = "zebra";
    char *str5 = "";
    char *str6 = "Hello, I am Adam.";

    printf("Testing with: \"%s\"\n", str1);
    printf("Length up to 'a': %d\n\n", count_alen(str1)); // Expected output: 7

    printf("Testing with: \"%s\"\n", str2);
    printf("Length up to 'a': %d\n\n", count_alen(str2)); // Expected output: 0

    printf("Testing with: \"%s\"\n", str3);
    printf("Length up to 'a': %d\n\n", count_alen(str3)); // Expected output: 1

    printf("Testing with: \"%s\"\n", str4);
    printf("Length up to 'a': %d\n\n", count_alen(str4)); // Expected output: 5 (entire length)

    printf("Testing with: \"%s\"\n", str5);
    printf("Length up to 'a': %d\n\n", count_alen(str5)); // Expected output: 0

    printf("Testing with: \"%s\"\n", str6);
    printf("Length up to 'a': %d\n\n", count_alen(str6)); // Expected output: 8

    return 0;
}

