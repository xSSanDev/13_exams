#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    // Step 1: Handle negative numbers.
    if (nb < 0)
    {
        write(1, "-", 1);
        // Be careful with the most negative number (INT_MIN),
        // as -nb will overflow. We handle it by processing
        // the digits individually.
        ft_putnbr(-(nb / 10));
        ft_putnbr(-(nb % 10));
    }
    // Step 2: The recursive step for multi-digit numbers.
    else if (nb >= 10)
    {
        // Call the function for all but the last digit.
        ft_putnbr(nb / 10);
        // Call the function for the last digit.
        ft_putnbr(nb % 10);
    }
    // Step 3: The base case for single-digit numbers.
    else
    {
        // Convert the digit to a character and print it.
        char digit = nb + '0';
        write(1, &digit, 1);
    }
}
int main()
{
	 ft_putnbr(-858);
	return (0);
}
