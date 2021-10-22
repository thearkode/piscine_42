//#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	char ana[256] = "olaa";
	printf("%d", ft_strlen(ana));
}
*/
