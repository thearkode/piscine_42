#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_rev_print(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	while (len >= i)
	{
		write(1, &str[len], 1);
		len--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(&argv[1][0]);
	write(1, "\n", 1);
}