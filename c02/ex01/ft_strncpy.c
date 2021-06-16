#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n) {
		dest[i] = '\0'; //= 48;
		i++;
	}
	return (dest);
}

int		main(void)
{
	unsigned int n = 6;
	char *src;
	char dest[n];
	int c = 0;
	src = "alo alo Rio de Janeiro";

	ft_strncpy(dest, src, n);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	while (src[c] != '\0')
	{
		c++;
	}
	printf("src count: %d\n", c);
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	printf("dest count: %d\n", c);

	return (0);
}