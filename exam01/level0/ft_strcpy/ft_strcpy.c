char	*ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    // Loop through the source string (s2)
    while (s2[i] != '\0')
    {
        // Copy each character from s2 to s1
        s1[i] = s2[i];
        i++;
    }

    // After the loop, copy the null terminator from s2 to s1
    s1[i] = '\0';

    // Return a pointer to the destination string (s1)
    return s1;
}

