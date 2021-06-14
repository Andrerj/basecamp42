#include <stdio.h>

void	ft_ft(int *nbr)
{
	printf("%d\n", *nbr);
	printf("%p\n", nbr);
}

int	main(void)
{
	int	i;
	int	*ptr;

	i = 42;
	ptr = &i;
	ft_ft(ptr);
	return (0);
}
