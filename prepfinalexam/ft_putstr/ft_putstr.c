#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(void)
{
	char go[256] = "ana is amazing";
	ft_putstr(go);
}