#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}


char *ft_strdup(char *src)
{
	char *new;
	int i = 0;
	int len = ft_strlen(src) - 1;

	new = malloc((sizeof(char) * len + 1));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
int main(void)
{
	char go[256] = "String test";
	printf("%s\n", ft_strdup(go));
}