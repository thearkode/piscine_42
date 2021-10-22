#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_touper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return c;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	ft_strlowcase(str);

	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = ft_touper(str[i]);
		
		if (ft_is_alphanumeric(str[i - 1]) == 0)
			str[i] = ft_touper(str[i]);
		i++;
	}

	return (str);
}


int main (void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
