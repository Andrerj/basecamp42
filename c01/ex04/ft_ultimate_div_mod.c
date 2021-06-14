#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a = *a;
	int temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d\n", a);
	printf("a = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a after function = %d\n", a);
	printf("b after function = %d\n", b);
	return (0);
}