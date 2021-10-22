#include <unistd.h>


int ft_get_position(char c)
{
	int position = 1;
	if (c >= 'A' && c <= 'Z')
		position = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		position = c - 'a' + 1;
	return (position);
}

void	ft_repeat_alpha(char *str)
{
	int i = 0;
	int repeat = 0;
	while (str[i] != '\0')
	{
		repeat = ft_get_position(str[i]);
		while (repeat > 0)
		{
			write(1, &str[i], 1);
			repeat--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(&argv[1][0]);
	write(1, "\n", 1);
}