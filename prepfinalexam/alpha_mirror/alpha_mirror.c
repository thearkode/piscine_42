#include <unistd.h>

int	ft_position(char c)
{
	int position = 1;
	if (c >= 'a' && c <= 'z')
		position = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		position = c - 'A' + 1;
	return (position);
}

void	alpha_mirror(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] = 'z' - ft_position(s1[i]);
		else if (s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] = 'Z' - ft_position(s1[i]);
		write(1, &s1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(&argv[1][0]);
	write(1, "\n", 1);
}