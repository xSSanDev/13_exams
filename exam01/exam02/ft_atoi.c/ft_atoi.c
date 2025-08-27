#include <stdlib.h>
#include <stdio.h>

static int  ft_numlen(long n)
{
    int len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char        *ft_itoa(int nbr)
{
    char    *str;
    long    n;
    int     len;

    n = nbr;
    len = ft_numlen(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[len - 1] = (n % 10) + '0';
        n = n / 10;
        len--;
    }
    return (str);
}
int main(void)
{
    int num1 = 12345;
    int num2 = -678;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Number %d becomes string '%s'\n", num1, str1);
    printf("Number %d becomes string '%s'\n", num2, str2);
    printf("Number %d becomes string '%s'\n", num3, str3);

    // Always free the memory you allocate!
    free(str1);
    free(str2);
    free(str3);

    return (0);
}
