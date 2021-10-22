#include <unistd.h>

void	rotone(char *s1)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] >= 'A' && s1[i] <= 'Y') || (s1[i] >= 'a' && s1[i] <= 'y'))
			s1[i] = s1[i] + 1;
		else if (s1[i] == 'Z')
			s1[i] = s1[i] + 'A' - 'Z';
		else if (s1[i] == 'z')
			s1[i] = s1[i] + 'a' - 'z';
		write(1, &s1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(&argv[1][0]);
	write(1, "\n", 1);
}