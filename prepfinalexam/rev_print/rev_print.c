#include <unistd.h>

int	ft_strlen(char *str1)
{
	int i = 0;
	while (str1[i] != '\0')
		i++;
	return (i);
}

void	rev_print(char *s1)
{
	int i = 0;
	int len = ft_strlen(s1) - 1;
	while (len >= i)
	{
		write(1, &s1[len], 1);
		len--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(&argv[1][0]);
	write(1, "\n", 1);
}