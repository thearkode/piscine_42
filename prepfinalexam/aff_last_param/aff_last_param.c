#include <unistd.h>

void	aff_last_param(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		aff_last_param(&argv[argc - 1][0]);
	write(1, "\n", 1);
}