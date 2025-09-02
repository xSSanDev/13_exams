/*======================================ft_strcpy.txt=========================================
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: None
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
==========================================================================================*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char source[] = "Hello, World";
    char destination[15];
    ft_strcpy(destination, source);
    printf("%s\n",destination);
    return (0);
*/