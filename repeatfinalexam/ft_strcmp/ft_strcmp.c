#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main(void)
{
	char go[256] = "ana";
	char stop[256] = "pedro";
	printf("%i", ft_strcmp(go, stop));
}