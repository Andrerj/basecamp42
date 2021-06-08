void	ft_putchar(char c);
void	print_space_letters(int column, int x);
void	print_only_letters(int column, int x);

void	rush(int x, int y)
{
	char	break_line;
	int		row_index;
	int		column_index;

	break_line = '\n';
	row_index = 1;

	if (y >= 1 && x >= 1)
	{
		while (row_index <= y)
		{
			column_index = 1;
			while (column_index <= x)
			{
				if (row_index == 1 || row_index == y)
				{
					print_only_letters(column_index, x);
				}
				else
				{
					print_space_letters(column_index, x);
				}
				column_index++;
			}
			ft_putchar(break_line);
			row_index++;
		}
	}
}

void	print_only_letters(int column, int x)
{
	char	a;
	char	b;
	char	c;

	a = 'A';
	b = 'B';
	c = 'C';
	if (column == 1)
	{
		ft_putchar(a);
	}
	else if (column == x)
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(b);
	}
}

void	print_space_letters(int column, int x)
{
	char	b;
	char	space;

	b = 'B';
	space = ' ';
	if (column == 1 || column == x)
	{
		ft_putchar(b);
	}
	else
	{
		ft_putchar(space);
	}
}
