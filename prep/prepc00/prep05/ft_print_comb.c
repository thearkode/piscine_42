#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	sec;
	char	ter;

	first = '0';
	while (first <= '7')
	{
		sec = 1 + first;
		while (sec <= '8')
		{
			ter = 1 + sec ;
			while (ter <= '9')
			{
				ft_putchar(first);
				ft_putchar(sec);
				ft_putchar(ter);
				if (first != '7')
					write (1, ", ", 2);
				ter++;
			}
			sec++;
		}
		first++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
