#include <unistd.h>

void ft_first_word(char *str)
{
	int i = 0;
	while ((str[i] == ' ' || str[i] == '\t') && (str[i] != '\0'))
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_first_word(&argv[1][0]);
	write(1, "\n", 1);
}