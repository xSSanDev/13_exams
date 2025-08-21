#include <stdio.h> // For the printf function
#include <string.h> // For the standard strlen function for comparison

// Your ft_strlen function here
int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int main(void)
{
    char *str1 = "hello";
    char *str2 = "42";
    char *str3 = ""; // An empty string
    char *str4 = "A much longer string to test functionality";

    printf("Testing with \"%s\"\n", str1);
    printf("ft_strlen returned: %d\n", ft_strlen(str1));
    printf("Standard strlen returned: %zu\n\n", strlen(str1));

    printf("Testing with \"%s\"\n", str2);
    printf("ft_strlen returned: %d\n", ft_strlen(str2));
    printf("Standard strlen returned: %zu\n\n", strlen(str2));

    printf("Testing with \"%s\"\n", str3);
    printf("ft_strlen returned: %d\n", ft_strlen(str3));
    printf("Standard strlen returned: %zu\n\n", strlen(str3));

    printf("Testing with \"%s\"\n", str4);
    printf("ft_strlen returned: %d\n", ft_strlen(str4));
    printf("Standard strlen returned: %zu\n\n", strlen(str4));

    return 0;
}

