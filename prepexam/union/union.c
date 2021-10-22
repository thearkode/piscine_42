#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int i = 0;
	char ascii[256] = {0};

	while (str1[i] != '\0')
	{
		if (ascii[str1[i]] == 0)
			ascii[str1[i]] = 1;		
		i++;
	}

	i = 0;
	while (str2[i] != '\0')
	{
		if (ascii[str2[i]] == 0)
			ascii[str2[i]] = 1;
		i++;
	}
	
	i = 0;
	if (ascii[str1[i]] == 1)
	{
		write (1, &str1[i], 1);
		ascii[str1[i]] = 0;
		i++;
	}

	i = 0;
	if (ascii[str2[i] == 1])
	{
		write (1, &str2[i], 1);
		ascii[str2[i]] = 0;
		i++;
	}
}
int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(&argv[1][0], &argv[2][0]);
	}
	write(1, "\n", 1);
}