#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_firstword( char *argv)
{
	int i = 0;

		while (argv[i] == ' ' || argv[i] == '\t')
		{
			i++;
		}

		while (argv[i] != ' ' && argv[i] != '\0')
		{
			ft_putchar(argv[i]);
			i++;
		}	
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_firstword(&argv[1][0]);
	}
	write(1, "\n", 1);
}