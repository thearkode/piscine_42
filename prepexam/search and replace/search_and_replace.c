#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_searchreplace(char *argv, char search, char replace)
{
	int k = 0;

	while (argv[k] != '\0')
	{
		if (argv[k] == search)
		{
			argv[k] = replace;
			ft_putchar(argv[k]);
		}
		else
			ft_putchar(argv[k]);
		k++;
	}
}

int ft_strlen(char *argv)
{
	int i = 0;

	while (argv[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	int len1;
	int len2;

	len1 = ft_strlen(&argv[2][0]);
	len2 = ft_strlen(&argv[3][0]);

	if (argc == 4 && len1 == 1 && len2 == 1)
	{
		ft_searchreplace(&argv[1][0], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
}