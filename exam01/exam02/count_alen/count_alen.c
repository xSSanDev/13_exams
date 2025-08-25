#include <stdio.h>
int count_alen(char *str)
{
    int len = 0;

    // Loop through the string
    while (str[len] != '\0')
    {
        // If 'a' is found, return the current count immediately
        if (str[len] == 'a')
        {
            return (len);
        }
        len++;
    }

    // If the loop finishes (meaning no 'a' was found),
    // return the final count, which is the total length.
    return (len);
}
int main()
{
	int result = count_alen("Hello youseef");
	printf("%d",result);
	return(0);
}
