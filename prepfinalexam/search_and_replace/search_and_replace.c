#include <unistd.h>

void	search_and_replace(char *s1, char search, char replace)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == search)
			s1[i] = replace;
		write(1, &s1[i], 1);
		i++;
	}
}

int	ft_strlen(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int len1 = ft_strlen(&argv[2][0]);
	int len2 = ft_strlen(&argv[3][0]);
	
	if (argc == 4 && len1 == 1 && len2 == 1)
	{
		search_and_replace(&argv[1][0], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
}