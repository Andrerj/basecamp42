#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
	printf("Show!\n");
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 3;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);
}