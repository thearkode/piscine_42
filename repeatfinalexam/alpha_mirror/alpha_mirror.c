#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + 'Z' - str[i];
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + 'z' - str[i];
		write(1, &str[i], 1);
		i++;		
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(&argv[1][0]);
	write(1, "\n", 1);
}