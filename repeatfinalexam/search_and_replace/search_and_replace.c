#include <unistd.h>


void	ft_search_and_replace(char *str, char search, char replace)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search)
			str[i] = replace;
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int len1 = ft_strlen(&argv[2][0]);
	int len2 = ft_strlen(&argv[3][0]);

	if (argc == 4 && len1 == 1 && len2 == 1)
		ft_search_and_replace(&argv[1][0], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
}