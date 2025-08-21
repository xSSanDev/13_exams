int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	// Loop as long as both strings have not reached the null terminator
	// and the characters at the current index are equal.
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	// After the loop, the first non-matching character is found,
	// or one of the strings has ended. The difference in ASCII values
	// determines the return value.
	return (s1[i] - s2[i]);
}

