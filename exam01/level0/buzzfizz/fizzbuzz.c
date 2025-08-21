#include <unistd.h>

// This helper function prints an integer to standard output,
// using recursion to handle multi-digit numbers.
void ft_putnbr(int nbr)
{
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
    }
    char digit = (nbr % 10) + '0';
    write(1, &digit, 1);
}

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        // Check for the most specific condition first: multiples of both 4 and 7.
        // 4 * 7 = 28, so we check for multiples of 28.
        if (i % 4 == 0 && i % 7 == 0)
        {
            write(1, "buzzfizz", 8);
        }
        // Check for multiples of 4 only.
        else if (i % 4 == 0)
        {
            write(1, "buzz", 4);
        }
        // Check for multiples of 7 only.
        else if (i % 7 == 0)
        {
            write(1, "fizz", 4);
        }
        // If none of the above conditions are met, print the number.
        else
        {
            ft_putnbr(i);
        }
        
        // Print a newline after every output.
        write(1, "\n", 1);
        i++;
    }
    return 0;
}

