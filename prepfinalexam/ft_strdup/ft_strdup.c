#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int ft_strlen(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *new;
	int len = ft_strlen(src);
	int i = 0;

	new = (char *)malloc(sizeof(char) * len + 1);
	if (new != (char *)malloc(sizeof(char) * len + 1))
		return (NULL);
	while (src[i] != '\0')
	{
		src[i] = new[i];
		i++;
	}
	new[i + 1] = '\0';
	return (new);
}

int main(void)
{
	char go[256] = "ana";
	printf("%s", ft_strdup(go));
}