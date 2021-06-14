#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;

	printf("value of a after swap: %d\n", *a);
	printf("value of b after swap: %d\n", *b);
}

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("value of a: %d\n", a);
	printf("value of b: %d\n", b);
	ft_swap(&a, &b);
	return (0);
}