#include <unistd.h> // Required for the write() function

void	ft_putstr(char *str)
{
	int i = 0; // Initialize a counter for the string index

	// Loop through the string until the null terminator ('\0') is found
	while (str[i] != '\0')
	{
		// Write a single character to standard output
		// The `&` gets the address of the current character
		// The `1` is the number of bytes to write
		write(1, &str[i], 1);
		i++; // Increment the counter to move to the next character
	}
}
int main ()
{
	ft_putstr("Hello World ");
	ft_putstr("\n");
}
