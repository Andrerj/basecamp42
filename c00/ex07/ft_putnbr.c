#include <unistd.h>

void	ft_print_number(int nb)
{
	char	rev_num[10];
	int		cont;

	cont = 0;
	while (nb != 0)
	{
		rev_num[cont] = nb % 10 + '0';
		nb = nb / 10;
		cont++;
	}
	while (cont > 0)
	{
		write (1, &rev_num[cont - 1], 1);
		cont--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_print_number(nb);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
