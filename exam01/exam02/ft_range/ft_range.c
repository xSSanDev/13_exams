#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i = 0;
    int size;

    // 1. Calculate the size of the array
    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;

    // 2. Allocate memory for the array
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return (NULL);

    // 3. Fill the array with numbers
    while (i < size)
    {
        if (start > end)
        {
            range[i] = start - i; // Count down from start
        }
        else
        {
            range[i] = start + i; // Count up from start
        }
        i++;
    }
    return (range);
}
int main(void)
{
    // Example 1: (1, 3) -> should be 1 2 3
    int *res1 = ft_range(1, 3);

    printf("Range (1, 3): ");
    int i = 0; // 1. Initialize counter
    while (i < 3) // 2. Set condition
    {
        printf("%d ", res1[i]);
        i++; // 3. Increment inside the loop
    }
    printf("\n");

    // Example 2: (0, -3) -> should be 0 -1 -2 -3
    int *res2 = ft_range(0, -3);

    printf("Range (0, -3): ");
    i = 0; // IMPORTANT: Reset the counter for the next loop!
    while (i < 4)
    {
        printf("%d ", res2[i]);
        i++;
    }
    printf("\n");

    // It's good practice to free the memory you allocate
    free(res1);
    free(res2);

    return (0);
}
