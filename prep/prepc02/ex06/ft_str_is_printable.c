#include <unistd.h>
#include <stdio.h>
#include <string.h>

int 	ft_str_is_printable(char *str)
{
	int i;
	int value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] <= 127)
		value = 1;
		else
		value = 0;
		i++;
	}
	return(value);
}

int main(void)
{
	char *str = " ";
	printf("%d", ft_str_is_printable(str));
}