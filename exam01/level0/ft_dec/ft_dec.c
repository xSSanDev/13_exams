#include <stdio.h>
void ft_dec(int *a)
{
	//*a = *a - 1;
	(*a)--;
}
int main(void)
{
    int num = 10;
    
    printf("The original value is: %d\n", num);
    
    // Call the function with the address of num
    ft_dec(&num);
    
    printf("The new value is: %d\n", num);
    
    return (0);
}


