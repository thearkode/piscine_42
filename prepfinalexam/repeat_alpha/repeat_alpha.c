#include <unistd.h>

int	ft_get_position(char c)
{
	int position = 1;
	if (c >= 'a' && c <= 'z')
		position = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		position = c - 'A' + 1;
	return (position);
}

void	repeat_alpha(char *s1)
{
	int repeat = 0;
	int i = 0;
	while (s1[i] != '\0')
	{
		repeat = ft_get_position(s1[i]);
		while (repeat > 0)
		{
			write(1, &s1[i], 1);
			repeat--; 
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(&argv[1][0]);
	write(1, "\n", 1);
}