#include <stdio.h>

int	ft_strlen(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	int temp;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
int main(void)
{
	char go[256] = "amor";
	printf("%s", ft_strrev(go));
}