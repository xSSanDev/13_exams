/*======================================count_alen.txt=========================================
Assignment name  : count_alen
Expected files   : count_alen.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that returns the length of a string till an 'a'

if 'a' dosent exist it in the string it will simply return the whole strings length

Your function must be declared as follows:

int    count_alen(char *str);
==========================================================================================*/
#include <stdio.h>
int count_alen(char *str)
{

    int i = 0;
    while(str[i] != '\0' && str[i] != 'a')
    {
        i++;
    }
    return(i);
}
int main()
{
    char result ;
    result = count_alen("helloa World");
    printf("%d\n",result);
}