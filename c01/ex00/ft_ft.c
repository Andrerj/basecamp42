#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	i = 24;
	int	*ptr;
	ptr = &i;
	printf("i = %d\n", *ptr);
	printf("i = %p\n", ptr);
	ft_ft(ptr);
	printf("i = %d\n", *ptr);
	printf("i = %p\n", ptr);
	return (0);
}
