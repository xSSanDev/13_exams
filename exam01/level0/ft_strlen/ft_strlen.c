#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    int result;
    result = ft_strlen("Hello");
    printf("the len of my string is :%d",result);
    return(0);
}
