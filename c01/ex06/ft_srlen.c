#include <stdio.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != '\0') {
		str++;
		c++;
	}
	printf("%d", c);
	return c;
}

int		main(void)
{
	char *str;

	str = "Aloha";
	ft_strlen(str);
	return (0);
}