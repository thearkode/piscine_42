#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int main(void)
{
	char src[256] = "ana";
	printf("%d", ft_strlen(src));
}