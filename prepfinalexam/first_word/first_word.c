#include <unistd.h>

void	first_word(char *s1)
{
	int i = 0;	
	while ((s1[i] == ' ' || s1[i] == '\t') && s1[i] != '\0')
		i++;
	while ((s1[i] != ' ' && s1[i] != '\t') && s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(&argv[1][0]);
	write(1, "\n", 1);
}