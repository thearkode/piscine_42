#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_getposition(char c)
{
	if ( c >= 'A' && c <= 'Z')
		return ( c - 'A' + 1);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else
		return(1);

}

void ft_repeat( char *argv)
{
	int i = 0;
	int repeat;

	while (argv[i] != '\0')
	{
		repeat = ft_getposition(argv[i]);
		while (repeat > 0)
		{
			ft_putchar(argv[i]);
			repeat--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if ( argc == 2)
	{
		ft_repeat(&argv[1][0]);
	}
	write(1, "\n", 1);
}
