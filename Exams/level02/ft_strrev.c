/*======================================ft_strrev.txt=========================================
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
==========================================================================================*/
#include <stdio.h>
char    *ft_strrev(char *str)
 
{
    int start = 0;
    int end = 0;
    char temp;

    while(str[end] != '\0')
    {
        end++;
    }
    
    end--;


while(start < end)
{ 
   temp = str[start];
   str[start] = str[end];
   str[end] = temp;

   start++;
   end --;
}
return(str);
}
int main()
{
    char my_string[] = "str";
    *ft_strrev(my_string);
   printf("%s\n",my_string);
   return(0);
}