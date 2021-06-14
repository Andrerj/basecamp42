#include <unistd.h>

void	ft_print_number(char m, char c, char d, char u)
{
	if (d > m || (d == m && u > c))
	{
		write(1, &m, 1);
		write(1, &c, 1);
		write(1, " ", 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (!(((m == '9') && (c == '8')) && (d == '9') && (u == '9')))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_second_number(char m, char c)
{
	char	d;
	char	u;

	d = '0';
	while (d <= '9')
	{
		u = '0';
		while (u <= '9')
		{
			ft_print_number(m, c, d, u);
			u++;
		}
		d++;
	}	
}

void	ft_print_comb2(void)
{
	char	m;
	char	c;

	m = '0';
	while (m <= '9')
	{
		c = '0';
		while (c <= '9')
		{	
			ft_second_number(m, c);
			c++;
		}
		m++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
