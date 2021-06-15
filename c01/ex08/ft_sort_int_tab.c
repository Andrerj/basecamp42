#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int aux;
	int flag;

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

int		main()
{
	int tab[8];
	int c;

	tab[0] = 5;
	tab[1] = 16;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = 23;
	tab[5] = 9;
	tab[6] = 6;
	tab[7] = 0;

	while (c < 8)
	{
		printf("%d - ", tab[c]);
		c++;
	}

	printf("\n");
	ft_sort_int_tab(tab, 8);
	c = 0;
	while (c < 8)
	{
		printf("%d - ", tab[c]);
		c++;
	}
	return (0);
};