#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, char d, char u)
{
	char	comb[3];

	comb[0] = c;
	comb[1] = d;
	comb[2] = u;
	if ((c == '7' && d == '8') && (u == '9'))
	{
		write(1, comb, 3);
	}
	else
	{
		write(1, comb, 3);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = 48;
	while (c <= 55)
	{
		d = 48;
		while (d <= 56)
		{
			u = 48;
			while (u <= 57)
			{
				if (c < d && d < u)
				{
					ft_putchar(c, d, u);
				}
				u++;
			}	
			d++;
		}
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
