#include <unistd.h>

/*void	ft_rotone(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + 'z' - str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + 'Z' - str[i];
		write(1, &str[i], 1);
		i++;
	}
}
*/

void	ft_rotone(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
		write(1, &str[i], 1);
		i++;	
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(&argv[1][0]);
	write(1, "\n", 1);
}