#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i= 0;
	while (i <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return(ft_strlen(src));
}

int main(void)
{
	char dest[] = "alo";
	char src[] = "ola ana";
	unsigned int size;

	size = ft_strlen(dest);
	printf("%d", ft_strlcpy(dest, src, size));
}
