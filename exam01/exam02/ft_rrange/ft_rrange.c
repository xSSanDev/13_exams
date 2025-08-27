#include <malloc.h>
int	*ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		n = start - end + 1;

	range = (int *)malloc(sizeof(int)* n);
	if(!range)
		return(NULL);
	while (i < n)
	{
		if(start > end)
		{
			range[i] = end + i;
		}
		else
		{
			range[i] = end - i;
		}
		i++;
	}
	return (range);
}int main(void)
{
    // Example 1: A simple positive range
    int *result1 = ft_rrange(1, 3);
    
    printf("Result for (1, 3): ");
    int i = 0; // 1. Initialize counter
    while (i < 3) // 2. Condition
    {
        printf("%d ", result1[i]);
        i++; // 3. Increment
    }
    printf("\n");

    // Example 2: A range that crosses zero
    int *result2 = ft_rrange(-1, 2);
    
    printf("Result for (-1, 2): ");
    i = 0; // Reset counter for the next loop!
    while (i < 4)
    {
        printf("%d ", result2[i]);
        i++;
    }
    printf("\n");

    return (0);
}
