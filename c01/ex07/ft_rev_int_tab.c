#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int v;

	c = 0;
	while (c < size)
	{
		v = tab[size - 1];
		tab[size - 1] = tab[c];
		tab[c] = v;
		c++;
		size--;
	}

}

int		main()
{
	int tab[8];
	int c = 0;
	
	while (c < 8)
	{
		tab[c] = c;
		printf("%d", tab[c]);
		c++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 8);

	c = 0;
	while (c < 8)
	{
		printf("%d", tab[c]);
		c++;
	}
	return (0);
};