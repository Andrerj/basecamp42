void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	v;

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
