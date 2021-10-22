#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
}

int	main(void)
{	
	char nome[] = "Filipe";
	ft_putstr(nome);
}