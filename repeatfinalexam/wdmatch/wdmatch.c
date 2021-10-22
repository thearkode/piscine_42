#include <unistd.h>

void	ft_wdmatch(char *str1, char *str2)
{
	int i = 0;
	int pos = 0;
	while (str1[i] != '\0' && str2[pos] != '\0')
	{
		if (str1[i] == str2[pos])
		{
			i++;
			pos++;
		}
		else
			pos++;
	}
	if (str1[i] == '\0')
	{
		int k = 0;
		while (str1[k] != '\0')
		{
			write(1, &str1[k], 1);
			k++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(&argv[1][0], &argv[2][0]);
	write(1, "\n", 1);
}