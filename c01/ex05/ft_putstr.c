#include <unistd.h>
#include <stdio.h>

void	ft_putsr(char *str)
{
	
	while (*str != '\0') {
		write(1, str, 1);
		str++;
	}
}

int		main(void)
{
	char *str;

	str = "Aloha";
	ft_putsr(str);
	return (0);
}