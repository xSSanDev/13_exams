#include <unistd.h>
char *swap_cases(char *str)
{
    int i = 0;

    // 1. The LOOP to process every character
    while (str[i] != '\0')
    {
        // This is your correct logic for swapping
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        // 2. The INCREMENT to move to the next character
        i++;
    }

    // 3. The RETURN statement required by the function
    return (str);
}
int main(void)
{
    // Create a modifiable array of character
    char my_string[] = "i will become a student at 1337";
    swap_cases(my_string);
    int i = 0;
    while (my_string[i] != '\0')
    {
        write(1, &my_string[i], 1);
        i++;
    }
    write(1, "\n", 1); 

    return (0);
}
