#include <stdio.h>

char	*ft_strncat(char *dest, char *src)
{
	unsigned int i;
	unsigned int b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;	
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{	
	char dest[] = "ana";
	char src[] = "isamazing";

	printf("%s", ft_strncat(dest, src));
	return(0);
}