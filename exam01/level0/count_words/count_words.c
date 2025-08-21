int	count_words(char *str)
{
	int i = 0;
	int count = 0;
	int is_word = 0;

	while (str[i] != '\0')
	{
		// Check if the current character is a delimiter (space or tab)
		if (str[i] == ' ' || str[i] == '\t')
		{
			is_word = 0; // Not inside a word
		}
		else if (is_word == 0)
		{
			is_word = 1; // Start of a new word
			count++;
		}
		i++;
	}
	return (count);
}
