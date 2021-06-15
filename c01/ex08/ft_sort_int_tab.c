#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	aux;
	int	flag;

	c = 0;
	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		c = 0;
		while (c < size - 1)
		{
			if (tab[c] > tab[c + 1])
			{
				flag = 1;
				aux = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = aux;
			}
			c++;
		}
	}
}
