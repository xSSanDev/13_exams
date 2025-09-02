/*======================================occ_z.txt=========================================
Assignment name  : occ_a
Expected files   : occ_a.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that takes a string and return how many times it incounters 'A'

The function should be declared as follows

int occ_a(char *str);
==========================================================================================*/
#include <stdio.h>
int	occ_a(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
		{
			count++;
		}
		i++;
	}
	return (count);
}
int main()
{
    char result;
    result = occ_a("HelAlo Anass");
    printf("%d\n",result);
    return(0);
}