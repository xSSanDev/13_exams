#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rstr_capitalizer(char *str)
{
	int i = 0;
	int is_new_word = 1; // Flag to track if the next character is the start of a word

	while (str[i])
	{
		// If the character is a space, set the flag for a new word.
		if (is_space(str[i]))
		{
			is_new_word = 1;
		}
		// If the character is an uppercase letter and it is the start of a new word, print it as is.
		else if (is_new_word && str[i] >= 'A' && str[i] <= 'Z')
		{
			is_new_word = 0;
		}
		// If the character is a lowercase letter and it is the start of a new word, convert it to uppercase and print.
		else if (is_new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			is_new_word = 0;
		}
		// If the character is an uppercase letter but not the start of a new word, convert it to lowercase and print.
		else if (!is_new_word && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
    int i;
    
    // Check if there are no arguments besides the program name.
    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    // Loop through each argument provided by the user.
    i = 1;
    while (i < argc)
    {
        rstr_capitalizer(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    
    return 0;
}

