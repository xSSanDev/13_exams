#include <stdio.h>
int occ_z(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'z')
		{
			count++;
		}
		i++;
	}
	return count;
}
int main()
{
	int result = occ_z("jjfzhzzxhzzhzzh");
	printf("the string has %d z", result);
	return(0);
}
