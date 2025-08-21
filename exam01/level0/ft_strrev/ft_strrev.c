// A helper function to find the length of the string.
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	temp;

	len = ft_strlen(str); // Get the total length of the string
	i = 0;

	// Loop from the beginning and end of the string, swapping characters
	while (i < len / 2)
	{
		temp = str[i];          // Store the character from the beginning
		str[i] = str[len - 1 - i]; // Replace the beginning character with the one from the end
		str[len - 1 - i] = temp;   // Replace the end character with the one from the beginning
		i++;
	}

	return (str);
}

