#include <stdio.h>
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
int main()
{
    int result;
    result = count_alen("Hello");
    printf("The length is: %d\n", result);
    return(0);
}
