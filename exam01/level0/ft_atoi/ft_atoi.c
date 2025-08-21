int	ft_atoi(char *str)
{
    int	i = 0;
    int	sign = 1;
    int	result = 0;

    // 1. Skip leading whitespaces.
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    // 2. Handle optional sign characters.
    // Count the number of negative signs to determine the final sign.
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }

    // 3. Convert digits to an integer.
    // Loop as long as the character is a digit ('0' through '9').
    while (str[i] >= '0' && str[i] <= '9')
    {
        // Multiply the current result by 10 and add the new digit.
        // Subtracting '0' from a digit character gives its integer value.
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // 4. Apply the sign and return the final integer.
    return (result * sign);
}

