#include <unistd.h>

void	aff_a(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == 'a')
		{
			write(1, "a", 1);
			break;
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		aff_a(&argv[1][0]);
	else if (argc != 2)
		write(1, "a", 1);		
	write(1, "\n", 1);
}